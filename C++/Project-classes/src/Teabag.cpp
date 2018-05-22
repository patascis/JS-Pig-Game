/*
 * Teabag.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: pamigo
 */

#include <sstream>

#include "Teabag.h"



Teabag::Teabag() {
}


float Teabag::calculateTotal(){
	this->size = size;

	if(size == "small" or size == "s"){
		price = 3.99;
	}
	else if (size == "medium" or size == "m" ){
		price = 5.99;
	}
	else if (size == "large" or size == "l"){
		price = 6.99;
	}

	return price;
}

string Teabag::showOrder() {
	stringstream ss;

	ss << "Thank you! You ordered a ";
	ss << size;
	ss << " ";
	ss << flavor;
	ss << " tea. That would be  $";
	ss << price;

	string order = ss.str();

	return order;

}
