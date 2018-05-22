#include <iostream>

using namespace std;


void reverse(int nLen, char text[]){
	char *pStart = text;
	char *pEnd = text+nLen-1;

	for(int i=0; i<nLen/2; i++){
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;

	cout << text << endl;
	}

	cout << " OUT OF FOR LOOP " << text << endl;

}


int main(){

//	cout << "What is your name: " << flush;

//	string input;
//	cin >> input;

	char text[] = "Archer";
	int nLen = sizeof(text)-1;
	reverse(nLen, text);



	return 0;
}
