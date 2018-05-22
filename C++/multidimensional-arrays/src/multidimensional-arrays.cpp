#include <iostream>

using namespace std;

int main(){

	int values[3][10] = {
			{1,2,3,4,5,6,7,8,9,10},
			{2,4,6,8,10,12,14,16,18,20},
			{3,6,9,12,15,18,21,24,27,30}
	};

	for(int i=0; i<3; i++) {
		for(int j=0; j<10; j++) {
			values[i][j] *= 10;
			cout << values[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
