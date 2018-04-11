/* K&R page 19 */

#include <stdio.h>

/* count lines in input */
main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/