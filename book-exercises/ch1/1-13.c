/* K&R page 24 */

/*
    This prints a histogram of the lengths of words in the input.
    Compile this file, run it, enter some input, and then send the EOF to see
    the histogram. It supports words up to a length of 10 characters.
    The y-axis represents the characters in a word. The x-axis represents
    how many words. One word is represented by an X.

    Example:

    3: XXXXX
    2: XXX
    1: X

    The above represents there was 1 word with 1 character, 3 words with 2 characters, and 5 words
    with 3 characters.
*/

#include <stdio.h>

#define IN 		1 /* inside a word */
#define OUT 	0 /* outside a word */

main()
{
    int c, i;
    c = i = 0;
    int wordLengths[10];
    int state = OUT;
    int currWordCount = 0;

    /* set every value in wordLengths[] to 0 */
    for (i = 0; i < 10; i++) {
        wordLengths[i] = 0;
    }

    /* loop through the input */
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                state = OUT;
                wordLengths[currWordCount - 1]++;
                currWordCount = 0;
            }
        } else {
            if (state == OUT)
                state = IN;
            currWordCount++;
        }
    }

    /* print the horizontal histogram */
    for (i = 9; i >= 0; i--) {
        printf("%d: ", i + 1);
        int j;
        for (j = 0; j < wordLengths[i]; j++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
*/