/**
 *
 *  This file produces the length of the hypotnuse when given two numbers.
 *
 *  @author   Chad Manning
 *  Course:   COMP B13
 *  Created:   Jan 31, 2017
 *  Source File: Hypotenuse.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	double inputOne, inputTwo, hypotenuse = 0.0;
	
	inputOne = atof(argv[1]);
	inputTwo = atof(argv[2]);
	
	hypotenuse = sqrt(pow(inputOne,2) + pow(inputTwo,2));
	
	printf("%.6lf", hypotenuse);
	
	return 0;
	}
