#include <iostream>
#include <sstream>

using namespace std;

void multiplyByTen(double &input){
	input *= 10;
}

int main(){

	cout << "Enter a number: -> " << flush;

	double input;
	cin >> input;

	stringstream ss;

	ss << "You entered ";
	ss << input;
	ss << " and now we're multiplying it by 10" << endl;

	string info = ss.str();
	cout << info << endl;

	multiplyByTen(input);

	cout << "The product is now " << input << endl;

	return 0;
}
