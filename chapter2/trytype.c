/*
 * trytype.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */


#include <stdio.h>
#include <ctype.h>

#define VTAB '\xb'     /* ASCI vertical tab */
#define BELL '\x7'     /* ASCI bell characters */

int getlen(char s[]);

int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return n;
}

main()
{
	char c = '0';
	int i = 0x1f;
	float f = 100.0F;
	enum boolean { NO, YES, OTHER = 100 };

	char cx = '\x30';

	signed char si = 200;
	unsigned char ui = 200;

	char temp[] = "1234a";


	printf("si = %3d\n", si);
	printf("ui = %3d\n", ui);

	printf(" i = %3d\n", i);

	printf(" f = %4.1f\n", f);

	printf(" c = %d\n", c);

	printf("cx = %d\n", cx);

	printf("NO is %d\n",NO);
	printf("YES is %d\n",YES);
	printf("OTHER is %d\n", OTHER);

	printf("Result = %d\n", atoi(temp));

	printf("Is digit %d\n", isdigit(c));

	c = 'a';

	printf("Is digit %d\n", isdigit(c));

	for(i = 0; i < 20; ++i)
		printf("%d ", rand());

	return 0;
}

