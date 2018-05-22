#include <iostream>

#include "utils.h"

using namespace std;

int main(){

	cout << "How many fingers do I have? > " << flush;

	int input;
	cin >> input;

	countFingers(input);

	return 0;
}


void countFingers(int input) {

	cout << input/sizeof(input) << endl;
	int selection = input;

	for( int i=0; i<input; i++) {
		cout << selection << " fingers" << endl;
		selection++;
	}
}
