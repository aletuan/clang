/*
 * wordcount.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */


#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

/* counting number of words in input */
int main()
{
	int c;
	int nw;    //number of words in input

	int state = OUT;

	nw = 0;

	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("%d\n", nw);

	return 0;
}
