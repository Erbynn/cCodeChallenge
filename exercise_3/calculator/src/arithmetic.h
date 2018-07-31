/*
 * arithmetic.h
 *
 *  Created on: Sep 17, 2017
 *      Author: uli
 */

#ifndef ARITHMETIC_H_
#define ARITHMETIC_H_

class Arithmetic {
public:
	Arithmetic();
	virtual ~Arithmetic();

	double add(double,double);
	double subtr(double,double);
	double mult(double,double);
	double div(double,double);
};

#endif /* ARITHMETIC_H_ */
