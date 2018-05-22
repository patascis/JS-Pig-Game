#include <iostream>

using namespace std;

int main(){

	cout << "Enter a number " << flush;

	int input;
	cin >> input;

	string row = "odd";
	int counter = 1;

	for(int i=0; i<input; i++, counter++){

		cout << "* " << flush;

		if(counter%6==0 && row == "odd"){
			cout << endl << " ";
			row = "even";
			counter = 0;
		}
		else if(counter%5==0 && row == "even"){
			cout << endl;
			row = "odd";
			counter = 0;
		}
	}
	return 0;
}
