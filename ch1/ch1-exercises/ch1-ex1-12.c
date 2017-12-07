/* K&R page 21 */

#include <stdio.h>

main ()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\t') || (c == '\n'))
			putchar('\n');
		else
			putchar(c);
	}
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/