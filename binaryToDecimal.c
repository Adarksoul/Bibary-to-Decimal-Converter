/**
 *
 *  This file contains the function binaryToDecimal().
 *
 *  @author   Chad Manning
 *  Course:   COMP B13
 *  Created:   Jan 22, 2017
 *  Source File: binaryToDecimal.c
 */

#include <stdio.h>

void binaryToDecimal(char binaryString[]){
	unsigned int currBasePower = 1, decimalConversion = 0;
	signed short stringSize = 0;

	while(binaryString[stringSize] != '\0'){
		++stringSize;
	}

	while(stringSize >= 0){
		if(binaryString[stringSize - 1] == '1'){
			decimalConversion += currBasePower;
			}
		--stringSize;
		currBasePower *= 2;
		}

		printf("%d\n", decimalConversion);

	return;
	}


