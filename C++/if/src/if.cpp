#include <iostream>

using namespace std;

int main() {

	string password = "archer";

	cout << "What is your name? > " << flush;

	string input;
	cin >> input;

	if( input == password) {
		cout << "Hi " << input << "!" << endl;
	}
	else {
		cout << "Who are you? Go away " << input << "!" << endl;
	}

}
