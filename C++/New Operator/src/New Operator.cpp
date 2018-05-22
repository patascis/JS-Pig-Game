#include <iostream>

using namespace std;

class Toy{
private:
	string name;
public:
	Toy(){ cout << "New Toy!..." << endl; }
	~Toy(){ cout << "Toy Destroy!..." << endl; }

	Toy(const Toy& other):name(other.name){ cout << "Toy copied" << endl; }

	void setName(string name){ this->name = name; };
	void speak() const { cout << "The new toy is a " << name << endl; }
};


int main(){

	// pointer
	Toy *toy = new Toy();
	toy->setName("Ball");
	toy->speak();

	// copying dereferenced pointer
	Toy toy2(*toy);
	toy2.speak();

	//always delete
	delete toy;

	return 0;
}
