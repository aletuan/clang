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

/* squeeuze: delete all c from s */
void squeeze(char s[], int c)
{
	int i,j;

	for(i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}

/* strcat: concatenate t to the end of s; s must be big enough */
void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')    /* find end of s */
		i++;

	while ((s[i++] = t[j++]) != '\0')    /* copy t */
		;
}

/* bitcount: count 1 bits in x*/
int bitcount(unsigned x)
{
	int b;

	for(b = 0; x!= 0; x >>= 1)
		if (x & 01)
			++b;

	return b;
}

/* trim: remove trailig blanks, tabs, newlines */
int trim(char s[])
{
	int n;

	for(n = strlen(s)-1; n >= 0; --n)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;

	s[n+1] = '\0';
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

	char temp[] = "1234c";

	char temp1[] = "123";
	char temp2[] = "456";

	int x = 2;


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

	printf("\ntemp: %s\n", temp);

	squeeze(temp, 'c');

	printf("temp: %s\n", temp);

	printf("temp1: %s\n", temp1);
	printf("temp2: %s\n", temp2);

	strcat(temp1, temp2);

	printf("temp1: %s\n", temp1);

	printf("1&2 = %d\n", 1&2);
	printf("1&&2 = %d\n", 1&&2);

	printf("x = %d\n", x);
	printf("Number of 1 bits in x: %d\n", bitcount(x));

	printf("Length of string temp1: %d\n",strlen(temp1));

	char test[] = "abc 	\n";
	printf("test :%s|\n", test);

	trim(test);
	printf("test :%s|\n", test);

	return 0;
}

