/* K&R page 20 */

#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/