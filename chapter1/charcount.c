/*
 * charcount.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */


#include <stdio.h>

/* count characters in input; 1st version */
main()
{
	long nc;
	int c;


	nc = 0;
	while ( (c = getchar()) != EOF)
		++nc;

	printf("\nnc = %ld\n", nc);
}
