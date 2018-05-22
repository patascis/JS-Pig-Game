/*
 * Person.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: pamigo
 */

#include "Person.h"
#include <sstream>

string Person::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age ";
	ss << age;

	return ss.str();
}
