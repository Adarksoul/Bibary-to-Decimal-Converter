/*
 *
 *    This program reads up to 32 zeroes and ones and outputs the
 *    decimal equivalent.
 *
 *    @author   Chad Manning
 *    Course:   COMP B13
 *    Created:   Jan ??, 2017                                             FIXME: Date before turning in
 *    Source File: binaryToDecimalMain.c
 */

#include <stdio.h>
#define BUFFER_SIZE 33

int main(void) {
	char binaryString [BUFFER_SIZE];

	scanf("%32s", binaryString);
	printf("%d\n", binaryToDecimal(binaryString));

	return 0;
}

