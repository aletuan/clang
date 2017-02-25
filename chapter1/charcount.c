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

	/*
	while ( (c = getchar()) != EOF)
		++nc;
	*/
	for (nc = 0; (getchar() != EOF); nc++)
		;

	printf("\nnc = %ld\n", nc);
}
