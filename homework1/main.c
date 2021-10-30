/*
 ============================================================================
 Name        : HW1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
// */
#include <stdio.h>
#include <stdlib.h>
#include "basicClassification.h"
#include "advancedClassificationLoop.h"
#include "advancedClassificationRecursion.h"


int main(void) {


	int start,end;
printf("Please enter a first number:- ");
scanf("%d",&start);

	printf("\n");
	printf("\n");

	printf("Please enter a second number:- ");
		scanf("%d",&end);

		printf("\n");
			printf("\n");


		printf("The Armstrong numbers are: ");
		for(int i=start; i<=end; i++){

				if(isArmstrongRecursion(i)==1){
										printf("%d ",i);
				}
				else{
										continue;
									}
				}

		printf("\n");


		printf("The Palindromes are:");
				for(int i=start; i<=end; i++){

					if(isPalindromLoop(i)==1){
										printf("%d ",i);
									}
					else{
											continue;
										}
						}

		printf("\n");


		printf("The Prime numbers are:");
				for(int i=start; i<=end; i++){

					if(isPrime(i)==1){
										printf("%d ",i);
									}
					else{
											continue;
										}

						}

		printf("\n");


		printf("The Strong numbers are:");
				for(int i=start; i<=end; i++){

					if(isStrong(i)==1){
										printf("%d ",i);
									}
					else{
						continue;
					}

						}

return 0;
}


