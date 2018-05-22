#include <iostream>

using namespace std;

class Alphabet{
private:
	char letter;
public:
//	Alphabet(){ cout << "New Letter" << endl; }
	//~Alphabet(){ cout << endl << "Letter Destroyed." << endl; }

	string toString(char letter){ this->letter=letter; string sLetter(1,letter); return sLetter; }


};

int main(){

	cout << "How many letters would you like to see (1-26)? -> " << flush;

	int input;
	cin >> input;

	while(input < 1 or input > 26){
		cout << "Not a valid entry." << endl;
		cout << "How many letters would you like to see (1-26)? -> " << flush;
		cin >> input;
	}

	Alphabet *pAlphabet = new Alphabet[input];

	char c = 'a';

	for(int i=0; i<input;i++,c++){
		cout << pAlphabet[i].toString(c) << ", " << flush;
	}

	delete [] pAlphabet;

}
