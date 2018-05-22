#include <iostream>

using namespace std;

class Animal{
private:
	string name;
public:
	Animal(){ cout << "New Animal!..." << endl; }
	~Animal(){ cout << "Animal Destroy!..." << endl; }

	Animal(const Animal& other):name(other.name){ cout << "Animal copied" << endl; }

	void setName(string name){ this->name = name; };
	void speak() const { cout << "The new Animal is a " << name << endl; }
};

Animal *newAnimal(){

	Animal *pAnimal = new Animal();
	pAnimal->setName("Archer");
	return pAnimal;
}

int main(){

	Animal *pDog = newAnimal();
	pDog->speak();

	delete pDog;

}
