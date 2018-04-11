/* K&R page 20 */

#include <stdio.h>

main()
{
	int blanks = 0, tabs = 0, newLines = 0, c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newLines;
	}

	printf("blanks: %d\n", blanks);
	printf("tabs: %d\n", tabs);
	printf("new lines: %d\n", newLines);
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/