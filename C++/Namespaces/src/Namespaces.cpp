#include <iostream>

#include "Animals.h"
#include "Cat.h"


using namespace std;
using namespace pat;


int main(){

	Cat cat;
	cat.speak();

	cats::Cat cat2;
	cat2.speak();

	pat::Cat cat3;
	cat3.speak();

	return 0;
}
