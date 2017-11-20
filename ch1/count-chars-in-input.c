/* K&R page 18 */

#include <stdio.h>

main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
	- pressing enter counts as a character (it's \n)
*/