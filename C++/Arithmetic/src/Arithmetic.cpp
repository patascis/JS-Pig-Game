#include <iostream>

using namespace std;


/*
 *
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 *
 */

// Take a large number of seconds and convert it to hours, minutes, seconds.
// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iteration (use mod operator)


int main() {

	cout << "Give me a number of seconds: " << flush;
	double input;
	cin >> input;

	double minute = input/60;
	cout << "Minutes: " << minute << endl;

	double hour = minute/60;
	cout << "Hours: " << hour << endl;

	input = hour * 3600;
	cout << "Back to seconds: " << input << endl;


	double counter = 10000;

	for(int x = 0; x<counter; x++){
		if( x%100 == 1 ){
			cout << ".";
		}
	}




	double value1 = (double)7/2;
	cout << value1 << endl;

	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5;
	cout << value4 << endl;

	int value5 = 13%5;
	cout << value5 << endl;

	double equation =  ((5/4)%2)+(2.3*6);

	cout << equation << endl;



	return 0;
}
