/*
 * Person.h
 *
 *  Created on: Feb 24, 2018
 *      Author: pamigo
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Car {
private:
	string brand;
	string color;
	int year;
public:
	Car();
	string getColor();
	string getBrand();
	int getYear();
	void setColor(string newColor);
	void setBrand(string newBrand);
	void setYear(int newYear);

};

#endif /* PERSON_H_ */
