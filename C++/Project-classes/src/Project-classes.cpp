#include <iostream>

#include "Teabag.h"

using namespace std;

int main(){

	do {
		cout << "Welcome to Teabag! Would you like a coffee or tea?: " << flush;
		string drinkChoice;
		cin >> drinkChoice;

		if(drinkChoice == "tea" ){
			break;
		}
		else if(drinkChoice == "coffee") {
			cout << "ERROR: Just kidding. We don't serve coffee..." << endl;
			continue;
		} else {
			cout << "ERROR: You need to order dude..." << endl;
			continue;
		}
	} while(true);

	cout << "What kind of tea? " << flush;
	string flavorChoice;
	cin >> flavorChoice;

	cout << "What size?(small/medium/large) " << flush;
	string sizeChoice;
	cin >> sizeChoice;

	Teabag tea1(flavorChoice, sizeChoice);

	Teabag tea2(flavorChoice);
	tea2.calculateTotal();

	cout << tea1.showOrder() << endl;
	cout << tea2.showOrder() << endl;







	return 0;
}

