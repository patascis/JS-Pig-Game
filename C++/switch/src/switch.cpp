#include <iostream>
using namespace std;

int main(){

	int value;

	cout << "1.\t New File" << endl;
	cout << "2.\t Open File" << endl;
	cout << "3.\t Delete File" << endl;
	cout << "4.\t Quit program" << endl;

	cout << endl << "Enter a value: " << flush;
	cin >> value;

	switch(value) {
	case 1:
		cout << "Creating a new file..." << endl;

		break;
	case 2:
		cout << "Opening a file..." << endl;
		break;
	case 3:
		cout << "Deleting a file..." << endl;
		break;
	case 4:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Unrecognized value." << endl;
	}


	return 0;
}
