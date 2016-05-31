#include <stdio.h>

#define CHAR_LOW        32
#define CHAR_HIGH       126
#define CHAR_NUM        (CHAR_HIGH - CHAR_LOW + 1)

/* program to print a histogram of the frequencies
        of different characters */
main()
{
        int c, i, j, cnt;
        int chars[CHAR_NUM];

        for (i = 0; i < CHAR_NUM; ++i)
                chars[i] = 0;

        while ((c = getchar()) != EOF)
                if (c >= CHAR_LOW && c <= CHAR_HIGH)
                        ++chars[c - CHAR_LOW];

        for (i = 0; i < CHAR_NUM; ++i) {
                putchar(i + CHAR_LOW);
                printf(" : ");
                for (j = 1; j <= chars[i]; ++j)
                        printf("=");
                printf("\n");
        }
}
