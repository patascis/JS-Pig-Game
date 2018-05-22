#include <iostream>

using namespace std;

int getInput() {
	int input;
	cin >> input;
	return input;
}

/* Getting an infinite loop when entering a string */

void processPassword(int password, int selection) {
	do {
		if (selection == password) {
			cout << "Password accepted." << endl;
			break;
		} else {
			cout << "Access denied." << endl;
			cout << "Enter your password > " << flush;
			selection = getInput();
		}

	} while (true);

}

int main() {

	const int password = 555;

	cout << "Enter your password > " << flush;
	int input = getInput();

	processPassword(password, input);

	return 0;
}
