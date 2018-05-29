// Function Constructor
/*
var Person = function(name, yearOfBirth, job) {
  this.name = name;
  this.yearOfBirth = yearOfBirth;
  this.job = job;
}

Person.prototype.calculateAge = function () {
  console.log(2016 - this.yearOfBirth);
}

Person.prototype.lastName = 'Smith';

var john = new Person('John', 1990, 'teacher');
var jane = new Person('Jane', 1994, 'programmer');
var mark = new Person('Mark', 1956, 'retired');

john.calculateAge();
jane.calculateAge();
mark.calculateAge();

console.log(john.lastName);
console.log(jane.lastName);
console.log(mark.lastName);
*/

/*
 // Object.create
 var personProto = {
   calculateAge: function() {
     console.log(2016-this.yearOfBirth);
   }
 };

 var john = Object.create(personProto);
 john.name = 'John';
 john.yearOfBirth = 1990;
 john.job = 'teacher';

var jane = Object.create(personProto,
{
  name: { value: 'Jane' },
  yearOfBirth: { value: 1995 },
  job : { value: 'designer '}
});

*/

/*
// lectures: passing functions as arguments
var years = [1990, 1959, 1989, 1923, 1996];

function arrayCalc(arr, fn) {
  var arrayRes = [];
  for(var i=0; i < arr.length; i++){
    arrayRes.push( fn(arr[i]) );
  }
  return arrayRes;
}

function calculateAge(el){
    return 2016-el;
}

function maxHeartRate(el){
  if( el >= 18 && el <= 81 ) {
    return Math.round(206.9 - (0.67 * el));
  } else {
    return -1;
  }
}

var ages = arrayCalc(years,calculateAge);
var rates = arrayCalc(ages, maxHeartRate);

console.log(ages);
console.log(rates);

*/


/*
// First Class Functions

function interviewQuestion(job){
  if (job === 'designer') {
    return function(name) {
      console.log('What is UX design, ' + name);
    }
  } else if (job === 'teacher') {
    return function(name) {
      console.log('What do you like to teach? ' + name);
    }
  } else {
    console.log('What do you do? ' + name);
  }
}

var designerQuestion = interviewQuestion('designer');
var teacherQuestion = interviewQuestion('teacher');

designerQuestion('Frank');

teacherQuestion('Mary');

*/

/*
// Closures
function interviewQuestion(job){
  var greet = 'Hello there!';
  return function(name) {
    if(job === 'designer'){
      console.log(greet + ' What is UX design, ' + name + '?');
    } else if(job === 'teacher') {
      console.log(greet + ' What do you like to teach? ' + name);
    } else {
      console.log(greet + ' What do you do?' + name);
    }
  }
}

var designerQuestion = interviewQuestion('designer');
var teacherQuestion = interviewQuestion('teacher');

designerQuestion('John');
teacherQuestion('Mary');
*/

/** CODING CHALLENGE **/

//Closure - The whole function can still be used and it will not affect new code w/ same variable name
(function() {
  function Question(questionText, options, correctAnswer){
    this.questionText = questionText;
    this.options = options;
    this.correctAnswer = correctAnswer;
  }

  Question.prototype.display = function(){
    console.log(this.questionText + '\n');
    for(var i = 0; i < this.options.length; i++){
      console.log([i] + ': ' + this.options[i] + '\n');
    }
  }

  Question.prototype.checkAnswer = function(answer, callback){
    var sc;
    if( answer === this.correctAnswer ) {
      console.log('Correct answer!');
      sc = callback(true);
    }
    else {
      console.log('Wrong answer!');
      sc = callback(false);
    }

    this.displayScore(sc);
  }


  Question.prototype.displayScore = function(score) {
    console.log('Your current score is ' + score);
    console.log('-----------------------------------------');
  }


  // Create the questions
  var question1 = new Question('What is my dog\'s name?', ['Rocky', 'Archer', 'Bobby'], 1 );
  var question2 = new Question('What is 1+1?', ['5', '23', '2'], 2 );
  var question3 = new Question('Who is this?', ['Patrick', 'Childish Gambino', 'Dude'], 0 );

  function score() {
    var sc = 0;
    return function(correct){
      if(correct){
        sc++;
      }
      return sc;
    }
  }

  var keepScore = score();

  function nextQuestion(){
    // Place question in an array and a n[0-2]
    var questions = [question1, question2, question3];
    var n = Math.floor( Math.random() * questions.length );

    // Call the display function from Question
    questions[n].display();

    //Use prompt and store it in a variable (using parseInt because prompt returns a string)
    var answer = prompt('Please select the correct answer (just type the number).');

    if(answer !== 'exit'){
      questions[n].checkAnswer(parseInt(answer), keepScore);
      nextQuestion();
    }
  }

      nextQuestion();

})();
