/*
 * advancedClassificationRecursion.c
 *
 *  Created on: Oct 24, 2021
 *      Author: mohanad
 */

#include "advancedClassificationRecursion.h"

int isArmstrongNumber2(int number)
{
     if(number>0)
    return (pow(number%10,3) +isArmstrongNumber2(number/10));
     return 0;
}

int isArmstrongRecursion(int number){

        return (isArmstrongNumber2(number)==number)? 1:0;

    }




/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    /* Find number of digits in num */
    int digit = (int)log10(num);

    /* Recursion base condition */
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

int isPalindromRecursion(int num){

	  if(num == reverse(num))
	    {
	        return 1;
	    }

	    return 0;
}
