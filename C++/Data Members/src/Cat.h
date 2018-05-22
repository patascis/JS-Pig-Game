/*
 * Cat.h
 *
 *  Created on: Feb 21, 2018
 *      Author: pamigo
 */

#ifndef CAT_H_
#define CAT_H_

class Player {
private:
	bool powerUp;
public:
	void run();
	void shoot();
	void superMode();
	void makeSuper();
	void makeNormal();
	Player();
	~Player();
};

#endif /* CAT_H_ */
