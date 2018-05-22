/*
 * == equality test
 * != not equals
 * < less than
 * > greater than
 * <= less than or equal to
 * >= greater than or equal to
 */


#include <iostream>

using namespace std;

int main() {

	cout << "Enter first value > " << flush;

	int value1;
	cin >> value1;

	cout << "Enter second value > " << flush;

	int value2;
	cin >> value2;

	cout << "You entered value1: " << value1 << " and value2: " << value2 << endl;

	if (value1 > value2) {
		cout << "Condition 1 is true!" << endl;
	} else {
		cout << "Condition 1 is false!" << endl;
	}

	bool boolean1 = (value1 >= 10) && (value2 != 20);
	bool boolean2 = value1 == value2;

	if (boolean1 && boolean2) {
		cout << "TRUE: you did the impossible!" << endl;
	}
	else {
		cout << "FALSE: that's a difficult task." << endl;
	}




	return 0;
}
