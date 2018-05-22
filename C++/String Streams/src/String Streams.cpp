#include <iostream>
#include <sstream>

using namespace std;

int main(){

	string brand = "Tesla";
	int year = 2018;

	stringstream ss;

	ss << "Woah! I really like your ";
	ss << year;
	ss << " ";
	ss << brand;
	ss << "! I wish I had one.";

	string info = ss.str();

	cout << info << endl;

	return 0;
}
