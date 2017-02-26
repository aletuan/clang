/*
 * search.c
 *
 *  Created on: Feb 26, 2017
 *      Author: ace
 */


#include <stdio.h>

/* binsearch find x in an ordered array */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if ( x > v[mid])
			low = mid + 1;
		else /* found match */
			return mid;
	}

	return -1; /* no match */
}

int main()
{
	int items[] = {1, 3, 4, 7, 8, 10, 11};
	int s = 3;

	printf("Seach result %d\n", binsearch(4, items, 7));

	return 0;
}
