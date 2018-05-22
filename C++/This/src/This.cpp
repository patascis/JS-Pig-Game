#include <iostream>

#include "Person.h"

using namespace std;

int main(){

	Person person1;
	Person person2("bob", 42);
	Person person3("Test", 20);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;

	return 0;
}
