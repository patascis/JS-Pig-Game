#include <iostream>

using namespace std;

int main() {

//	create array 12x12 0, 12, 24, 36... in a loop . then display..

	int twelve[12];

	for(int i=0; i<12; i++) {
		twelve[i] = i+1;
	}

	for(int i=0; i<12; i++) {
		twelve[i] = i*12;
		cout << twelve[i]<< endl;
	}




	return 0;
}
