/* K&R page 13 */

#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = 0, 20, ..., 300; floating-point version */
main ()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower list of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	/* print the table headers */
	printf(" C \tF\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}