/*
 * trytype.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */


#include <stdio.h>

#define VTAB '\xb'     /* ASCI vertical tab */
#define BELL '\x7'     /* ASCI bell characters */

int getlen(char s[]);

main()
{
	char c = '0';
	int i = 0x1f;
	float f = 100.0F;
	enum boolean { NO, YES };

	char cx = '\x30';

	signed char si = 200;
	unsigned char ui = 200;


	printf("si = %3d\n", si);
	printf("ui = %3d\n", ui);

	printf(" i = %3d\n", i);

	printf(" f = %4.1f\n", f);

	printf(" c = %d\n", c);

	printf("cx = %d\n", cx);

	printf("NO is %d\n",NO);
	printf("YES is %d\n",YES);

	return 0;
}

