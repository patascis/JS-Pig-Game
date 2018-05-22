#include <iostream>

using namespace std;

// Create a function that accepts and returns an array
// create a function that accepts reference of array [length]
// create a function that allocates memory and DELETES memory
// Could declare variables here string numbers[] = {"one", "two", "three"};

void show1(const int nLen, string animals[]){
	for(int i=0;i<nLen;i++){
		cout << animals[i] << " " << flush;
	}

	cout << endl;
}

void show2( ){
	cout << "test" << endl;
}

int main(){

	string animals[] = { "dog", "cat", "rabbit", "goat", "cow" };

	show2();

	return 0;
}
