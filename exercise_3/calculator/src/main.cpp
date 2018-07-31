/*
 * main.cpp
 *
 *  Created on: Sep 17, 2017
 *      Author: uli
 */

#include <iostream>
#include <cstdlib>

#include "arithmetic.h"

using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 4) {
		cout << "Usage: calculator << num1 operator num2" << endl;
		return -1;
	}
	Arithmetic *myCalc = new Arithmetic();
	/*
	 * get the arguments from the user
	 */
	char * endPtr;
	double num1,num2;
	num1 = strtod(argv[1],&endPtr);
	if ((num1 == 0) && (endPtr == argv[1])) {
	  cout << "Conversion of first number: " << argv[1] <<  " failed" << endl;
	  return(-1);
	}
	num2 = strtod(argv[3],&endPtr);
	if ((num2 == 0) && (endPtr == argv[3])) {
	  cout << "Conversion of second number: " << argv[3] << " failed" << endl;
	  return(-1);
	}
	
	unsigned char op = argv[2][0];

	switch (op) {
	case '+':
		cout << argv[1] << " + " << argv[3] << " = " << myCalc -> add(num1,num2) << endl;
		break;
	case '-':
		cout << argv[1] << " - " << argv[3] << " = " << myCalc -> subtr(num1,num2) << endl;
		break;
	case '*':
		cout << argv[1] << " * " << argv[3] << " = " << myCalc -> mult(num1,num2) << endl;
		break;
	case '/':
		double result;
		try {
			result = myCalc -> div(num1,num2);
		} catch (std::overflow_error const &e) {
			cout << e.what() << endl;
			return -1;
		}
		cout << argv[1] << " / " << argv[3] << " = " << result << endl;
		break;

	default: cout << argv[2][0] << "operator unknown" << endl;
		break;
	}


	return 0;
}


