#include <iostream>

using namespace std;

// Create a char string and output it...
// Output all chars with a for loop..
// output all chars with a while true loop

int main(){

	char name[] = "Archer";

	cout << "Name is " << name << endl;

	for(unsigned int i=0; i<sizeof(name);i++){
		cout << i << ": " << (int)name[i] << endl;
	}

	int j=0;

	while(true){

		if(name[j] == 0){
			break;
		}

		cout << name[j] << flush;

		j++;

	};


	return 0;
}
