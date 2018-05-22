#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 17.38;
	double dValue = 17.38;

	cout << fixed << setprecision(5) << "float value: " << fValue << endl;
	cout << setprecision(10) << fixed << "double value: " << dValue << endl;


	return 0;
}
