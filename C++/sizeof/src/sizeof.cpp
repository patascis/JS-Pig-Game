#include <iostream>

using namespace std;

int main() {

	int values[2][5] = {
			{2,4,6,8,10},
			{5,10,15,20,25}
	};

	cout << sizeof(values) << endl;

	cout << sizeof(values[0]) << endl;
	cout << sizeof(values[0][0]) << endl;

	for(unsigned int i=0; i<sizeof(values)/sizeof(values[i]); i++) {
		for(unsigned int j=0; j<sizeof(values[i])/sizeof(values[i][j]); j++) {

			cout << values[i][j] << " " << flush;
		}

		cout << endl;
	}

	return 0;
}
