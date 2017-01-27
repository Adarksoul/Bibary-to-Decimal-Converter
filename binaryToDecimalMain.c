/**
 *  Converts the input string of ASCII zeroes and ones in binaryString,
 *  to its integer equivalent and returns that integer.
 *
 *  @param binaryString A string of ones and zeroes
 *  @return the value of the binary bit string
 *
 */

/**
 *
 *    This program reads up to 32 zeroes and ones and outputs the
 *    decimal equivalent.
 *
 *    @author   Chad Manning
 *    Course:   COMP B13
 *    Created:   Jan 22, 2017
 *    Source File: binaryToDecimalMain.c
 */

#include <stdio.h>
#define BUFFER_SIZE 33

void binaryToDecimal(char binaryString[]);

int main(void) {
	char binaryString [BUFFER_SIZE];

	scanf("%32s", binaryString);
	binaryToDecimal(binaryString);

	return 0;
}

