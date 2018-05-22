#include <iostream>
#include "Cat.h"

using namespace std;

Player::Player() {
	cout << "Cat created." << endl;

	powerUp = true;
}

Player::~Player() {
	cout << "Cat destroyed." << endl;
}


void Player::run(){
	cout << "I am running now!" << endl;
}

void Player::shoot(){
	cout << "Shooting the target!" << endl;
}

void Player::superMode(){
	if(powerUp) {
		cout << "Super mode!!!" << endl;
	} else {
		cout << "Normal mode!" << endl;
	}
}

void Player::makeSuper(){
	powerUp = true;
}

void Player:: makeNormal(){
	powerUp = false;
}
