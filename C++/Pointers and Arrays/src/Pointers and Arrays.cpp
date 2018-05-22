#include <iostream>

using namespace std;

// loop through an array using a pointer , with array element reference syntax
// loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers;

int main(){

	string texts[] = {"archer", "lana", "cyrill", "cheryl", "pam", "sheamus"};

	string *pValue = texts;

	for(unsigned int i=0; i<sizeof(texts)/sizeof(string);i++){
		cout << pValue[i] << " " << flush;
	}

	cout << endl;

	for(unsigned int i=0; i<sizeof(texts)/sizeof(string);i++, pValue++){
		cout << *pValue << " " << flush;
	}

	string *pStart = texts;
	string *pEnd = &texts[5];

	cout << endl;

	while(true){
		cout << *pStart << " " << flush;

		if( *pStart == *pEnd ){
			break;
		}
		pStart++;

	}

	cout << endl;

/*	string bigArray[3][3] = {
			{"one", "two", "three"},
			{"a", "b", "c"},
			{"dog","cat","fish"}
	};

	string *pElement = &bigArray[0][3];

	for(unsigned int i=0; i<sizeof(bigArray)/sizeof(string);i++ ){
		for(unsigned int x=0; x<sizeof(bigArray)/sizeof(string); x++) {
			cout << pElement[i] << endl;
			cout << pElement[i][x] << " " << flush;
		}
	}
*/ /* LEARN POINTERS FOR MULTIDIMENSIONAL ARRAY */





	return 0;
}
