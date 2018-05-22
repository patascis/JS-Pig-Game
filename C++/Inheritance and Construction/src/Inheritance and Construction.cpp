#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal(string name): name(name){ cout << "New animal constructor called" << endl; }
	void info(){ cout << "Name: " << name << endl << endl; }
};

class Dog:public Animal {
private:
	string name2;
public:
	Dog(string name):Animal(name){ cout << "New Dog constructor called." << endl << endl; }
};

class French:public Dog {
public:
	French(string name):Dog(name){ cout << endl << "New French Bulldog called." << endl << endl; }
};


int main(){

	Animal animal("Puppy");
	animal.info();

	Dog dog("Archer");
	dog.info();

	French french("Big Puppy");
	french.info();


	return 0;
}
