/*
 * filecopy.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */


#include <stdio.h>

/* opy input to output. 1st version */
main()
{
	int c;

	c = getchar();

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
