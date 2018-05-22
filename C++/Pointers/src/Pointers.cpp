#include <iostream>

using namespace std;

void changeNumber(double *value);

int main(){

	int nValue = 100;

	int* pnValue = &nValue;

	*pnValue = 500;

	cout <<"Value of pnValue: " << *pnValue << endl;

	cout << endl << "Give me a float: " << flush;
	double input;
	cin >> input;

	cout << "1. You entered a value of " << input << endl;
	changeNumber(&input);
	cout <<"3. The value of input is now " << input << endl;


	return 0;
}


void changeNumber(double *value){
	*value *= 123.23;
	cout << "2. I changed your value and it's now " << *value << endl;
}
