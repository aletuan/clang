/*
 * hello.c
 *
 *  Created on: Feb 25, 2017
 *      Author: ace
 */

/* print Fehrenheit-Celsius table
 * for fahr = 0, 20,...., 300
 */

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 9; 		/* lower limit of temperature table */
	upper = 300; 	/* upper limit */
	step = 20;		/* step size */

	// Calculate Celsius and print result to console
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}


	return 0;
}
