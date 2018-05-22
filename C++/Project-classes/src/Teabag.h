/*
 * Teabag.h
 *
 *  Created on: Feb 25, 2018
 *      Author: pamigo
 */

#ifndef TEABAG_H_
#define TEABAG_H_

#include <iostream>

using namespace std;

class Teabag {
private:
	string flavor;
	string size = "small";
	float price;

public:
	Teabag();
	Teabag(string flavor): flavor(flavor){};
	Teabag(string flavor, string size): flavor(flavor), size(size){ calculateTotal(); };
	string showOrder();
	float calculateTotal();
};

#endif /* TEABAG_H_ */
