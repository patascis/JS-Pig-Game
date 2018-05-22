#include <iostream>

using namespace std;

int main(){

	char text[] = "Archer";

	int nChars = sizeof(text) - 1;

	char *pStart = text;
	char *pEnd = text + nChars - 1; // WHY?

	cout << *pEnd << endl;

	while(pStart < pEnd){

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout << text << endl;

	return 0;
}
