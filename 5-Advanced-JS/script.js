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
