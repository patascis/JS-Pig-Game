/*
 * Person.h
 *
 *  Created on: Feb 25, 2018
 *      Author: pamigo
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string newName){ name = newName; age = 0; };
	Person(string newName, int newAge);
	string toString();
};

#endif /* PERSON_H_ */
