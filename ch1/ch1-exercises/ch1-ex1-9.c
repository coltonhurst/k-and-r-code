/* K&R page 20 */

#include <stdio.h>

main()
{
	char c, lastChar = -1, keepGoing = 1;

	while (keepGoing == 1) {
		c = getchar();
		if (c != EOF) {
			if (!(lastChar == ' ' && c == ' ')) {
				putchar(c);
			}
			lastChar = c;
		} else {
			keepGoing = 0;
		}
	}

}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/