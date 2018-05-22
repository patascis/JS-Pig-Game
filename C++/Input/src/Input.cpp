#include <iostream>

using namespace std;

int main() {

	cout << "What's your name? : " << flush;

	string inputName;

	cin >> inputName;

	cout << "Hello there, " << inputName << endl;

	cout << "Enter a number: " << flush;

	int number;

	cin >> number;

	cout << "Thank you, " << inputName << " for giving me the number " << number << endl;

	return 0;
}
