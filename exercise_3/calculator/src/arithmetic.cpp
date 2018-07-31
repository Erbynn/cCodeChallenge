/*
 * arithmetic.cpp
 *
 *  Created on: Sep 17, 2017
 *      Author: uli
 */

#include "arithmetic.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Arithmetic::Arithmetic() {
	// TODO Auto-generated constructor stub

}

Arithmetic::~Arithmetic() {
	// TODO Auto-generated destructor stub
}

double Arithmetic::add(double num1,double num2) {
	return num1+num2;
}

double Arithmetic::subtr(double num1,double num2) {
	return num1-num2;
}

double Arithmetic::mult(double num1,double num2) {
	return num1*num2;
}

double Arithmetic::div(double num1,double num2) {

	if (num2 == 0) {
		throw std::overflow_error("Divide by zero exception");
	}
	else
		return (num1/num2);
}
