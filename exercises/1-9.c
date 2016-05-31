#include <stdio.h>

/* program to copy its input to its output,
        replacing each string of one or more
        blanks by a single blank */
main()
{
        int c, pc, fc;
        fc = 0;

        while ((c = getchar()) != EOF) {
                if (fc == 0) {
                        pc = c;
                        fc = 1;
                }

                if (c != ' ')
                        putchar(c);
                else if (pc != ' ')
                        putchar(c);
                pc = c;
        }
}
