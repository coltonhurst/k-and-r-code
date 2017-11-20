/* K&R page 18 */

#include <stdio.h>

main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}

/*

Notes:
	- on a mac, ctrl-d to send EOF and see result
	- pressing enter counts as a character (it's \n)

	- the isolated semicolon (;) in the for loop is a null statement
*/