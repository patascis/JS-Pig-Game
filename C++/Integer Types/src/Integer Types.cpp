#include <iostream>
#include <limits>

using namespace std;

int main() {

	int number = 123456;
	long int biggie = 512321314122;
	short int smalls = 20;

	cout << number << " " << biggie << " " << smalls << endl;

	cout << "The size of " << sizeof(biggie) << endl;

	return 0;
}
