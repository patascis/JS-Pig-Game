#include <iostream>

using namespace std;


class Dog{
private:
	string name;
	int age;
public:
	Dog(string fname, int age): name(fname), age(age){ cout << "New dog created." << endl; }
	~Dog() { cout << "Dog destroyed." << endl; }

	Dog(const Dog& other): name(other.name), age(other.age){ cout << "Dog Copied!" << endl; }
	void setName(string name){ this->name = name; }
	void setAge(int age){ this->age = age; }
	void speak() const { cout << "My name is " << name << " and I am " << age << endl; }

};



int main() {

	Dog dog1("Archer", 15);
	dog1.speak();

	Dog dog2(dog1);
	dog2.speak();
	dog2.setName("Billy");
	dog2.setAge(22);
	dog2.speak();
	dog1.speak();


	return 0;
}
