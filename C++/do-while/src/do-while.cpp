#include <iostream>

using namespace std;

int main() {

	const string name = "archer";

	string input;

	do {
		cout << "Hi there, what's your name? > " << flush;
		cin >> input;

		if(input != name) {
			cout << "Wrong name!" << endl;
		}
	} while(input != name);

	cout << "Oh, hi " << input << endl;

}
