#include <iostream>

using namespace std;

int main() {

	/*break....
	for(int i=0; i<5; i++){
		cout << "i is " << i << endl;

		if(i == 3) {
			break;
		}

		cout << "Looping..." << endl;

	}
	*/


	/*for(int i=0; i<5; i++){
		cout << "i is " << i << endl;

		if(i == 3) {
			continue;
		}

		cout << "Looping..." << endl;

	}*/


	const string name = "archer";

	string input = "archer";

	do {
		cout << "Hi there, what's your name? > " << flush;
		cin >> input;

		if(input != name) {
			continue;
		}
		else {
			cout << "Oh, hi " << input << endl;
			break;
		}
	} while(true);



	cout << "Program quitting..." << endl;

	return 0;
}
