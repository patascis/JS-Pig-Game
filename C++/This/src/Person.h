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
	int age;
	string name;
public:
	Person():name("unnamed"),age(0) {};
	Person(string name, int age): name(name), age(age){};
	string toString();
};

#endif /* PERSON_H_ */
