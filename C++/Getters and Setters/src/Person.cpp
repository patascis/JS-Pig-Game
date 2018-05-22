/*
 * Person.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: pamigo
 */

#include "Person.h"

Car::Car() {
	brand = "Lexus";
	color = "Blue";
	year = 2017;
}

string Car::getBrand() {
	return brand;
}

string Car::getColor() {
	return color;
}

int Car::getYear() {
	return year;
}

void Car::setColor(string newColor) {
	color = newColor;
}

void Car::setBrand(string newBrand) {
	brand = newBrand;
}

void Car::setYear(int newYear) {
	year = newYear;
}
