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
#include <math.h>

int main(int argc, char* argv[]){
	double hypotenuse = 0.0;
	

	
	hypotenuse = sqrt(pow(argv[1],2) + pow(argv[2],2));
	
	printf("%.6lf", hypotenuse);
	
	return 0;
	}
