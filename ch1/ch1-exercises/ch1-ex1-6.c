/* K&R page 17 */

#include <stdio.h>

main()
{
	/* get a character, see if it's equal to EOF */
	printf("Enter a character: ");
	int c = getchar();
	printf("Not equal to EOF: %d\n", c != EOF);
}