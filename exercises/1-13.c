#include <stdio.h>
#define MAXLEN  20      /* max word length */

/* program to print a histogram of the lengths
        of words from input */
main()
{
        int c, i, j, cnt;
        int length[MAXLEN];

        cnt = 0;

        /* set array values */
        for (i = 0; i < MAXLEN; ++i)
                length[i] = 0;

        /* populate array with word lengths */
        while ((c = getchar()) != EOF)
                if (c == ' ' || c == '\t' || c == '\n')
                        if (cnt > 0 && cnt < MAXLEN) {
                                ++length[cnt];
                                cnt = 0;
                        }
                        else if (cnt > MAXLEN)
                                cnt = 0;        /* too long */
                        else
                                ;
                else
                        ++cnt;

        /* print "=" for each word length occurence */
        for (i = 1; i < MAXLEN; ++i) {
                cnt = length[i];
                printf("%2d: ", i);
                for (j = 1; j <= cnt; ++j)
                        printf("=");
                printf("\n");
        }
}
