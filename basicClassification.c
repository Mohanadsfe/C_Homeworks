/*
 * basicClassification.cpp
 *
 *  Created on: Oct 24, 2021
 *      Author: mohanad
 */

#include "basicClassification.h"
#include <stdio.h>

 int isStrong(int number) {
	int numberOrg = number;
	if (number == 0)
		return 1;
	int sum = 0;
	while (number != 0) {

		sum = sum + factorial(number % 10);
		number = number / 10;

	}
	
	if (sum==numberOrg)
		return 1;
	return 0;

}

int factorial(int number) {

	if (number <= 1)
		return 1;

	return number*factorial(number-1);

}


int isPrime(int number){


	int i;
		for(i=2;i<=number/2;i++)
		{
			if(number%i!=0)
				continue;
			else
				return 0;  // false
		}
		return 1; // the loop is stop then the number is prime (true)

}




