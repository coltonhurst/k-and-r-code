/* K&R page 24 */

/*
    This prints two histograms based on the lengths of words in the input.
    Compile this file, run it, enter some input, and then send the EOF to see
    the histograms. It supports words up to a length of 10 characters.

    For the Horizontal Histogram
    The y-axis represents the length of a word. The x-axis represents
    how many words are that length. One word is represented by an X.

    Example:

    Input: a hi by wi joe bro zoe fam lan

    3: XXXXX
    2: XXX
    1: X

    The above represents there was 1 word with 1 character, 3 words with 2 characters, and 5 words
    with 3 characters in the input.

    For the Vertical histogram, the axis are flipped. It should look like this for the same input:
    
        X
        X
      X X
      X X
    X X X
    1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>

#define IN      1 /* inside a word */
#define OUT     0 /* outside a word */

main()
{
    int c, i, j;
    c = i = j = 0;
    int wordLengths[10];
    int state = OUT;
    int currWordCount = 0;

    /* set every value in wordLengths[] to 0 */
    for (i = 0; i < 10; i++) {
        wordLengths[i] = 0;
    }

    /* loop through the input */
    while ((c = getchar()) != EOF) {
        /* if it's the end of a word */
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                state = OUT;
                if ((currWordCount > 0) && (currWordCount < 11))
                    wordLengths[currWordCount - 1]++;
                currWordCount = 0;
            }
        } else { /* if it's at/in a word */
            if (state == OUT)
                state = IN;
            currWordCount++;
        }
    }

    printf("\n\n");
    /* print the horizontal histogram */
    for (i = 9; i >= 0; i--) {
        printf("%d: ", i + 1);
        for (j = 0; j < wordLengths[i]; j++) {
            printf("X");
        }
        printf("\n");
    }
    printf("\n\n");

    /* get the mode of words */
    int printAnX = 0;
    int mode = wordLengths[0];
    for (i = 0; i < 10; i++) {
        if (wordLengths[i] > mode)
            mode = wordLengths[i];
    }
    /*
        The mode will be the highest point on
        our vertical histogram. A mode is
        the number that occurs more often than
        any other in a set of numbers. For us, this is
        highest number of of words that are the same length.
    */
    /* print the vertical histogram */
    for (i = mode; i >= -1; i--) {
        for (j = 0; j < 10; j++) {
            if (i > 0) {
                if (wordLengths[j] >= i)
                    printf("X ");
                else
                    printf("  ");
            } else if (i == -1) {
                printf("%d ", j + 1);
            }
        }
        if (i != 0)
            printf("\n");
    }

    return 0;
}

/*
Notes:
	- on a mac, ctrl-d to send EOF and see result
    - This program is well documented on purpose. I hope it helps :)
*/