#include <iostream>

#include "Person.h"

using namespace std;



int main(){

	Car car;

	cout << "You own a " << car.getYear() << " " << car.getColor() << " " << car.getBrand() << endl;

	cout << endl << "Would you like to own a different car?: " << flush;

	string input;
	cin >> input;

	if (input == "yes") {

		/* SET COLOR */
		cout << "What color do you want? " << flush;
		string color;
		cin >> color;
		car.setColor(color);

		/* SET BRAND */
		cout << "Great! Next, what brand do you want? " << flush;
		string brand;
		cin >> brand;
		car.setBrand(brand);

		/* SET YEAR */
		cout << "Last question! What year do you want? " << flush;
		int year;
		cin >> year;
		car.setYear(year);

		cout << endl << "CONGRATULATIONS! Your new car is a " << car.getYear() << " " << car.getColor() << " " << car.getBrand() << endl;
	} else {
		cout << "Okay. Bye!" << endl;
	}

	return 0;
}
