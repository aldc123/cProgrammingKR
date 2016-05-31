#include <stdio.h>

/* program to copy input to output,
        replacing each tab, backspace & backslash
        with their visable character equivilent */
main()
{
        int c, m;
        m = 0;

        while ((c = getchar()) != EOF) {
                if (c == '\t') {
                        putchar('\\');
                        putchar('t');
                        m = 1;
                }

                if (c == '\b') {
                        putchar('\\');
                        putchar('b');
                        m = 1;
                }

                if (c == '\\') {
                        putchar('\\');
                        putchar('\\');
                        m = 1;
                }

                if (m == 0)
                        putchar(c);
                m = 0;
        }
}
