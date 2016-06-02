#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getliney(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line
        getline renamed to getliney as getline
        already exists in stdio.h, compile fails */
main()
{
        int len;                /* current line length */
        int max;                /* maximum length seen so far */
        char line[MAXLINE];     /* current input line */
        char longest[MAXLINE];  /* longest line saved here */

        max = 0;
        while ((len = getliney(line, MAXLINE)) > 0)
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }
        if (max > 0 && max < MAXLINE - 1)               /* there was line < max */
                printf("%d : %s", max - 1, longest);
        else if (max = MAXLINE - 1)                     /* line > max
                printf("%d : %s\n", max, longest);
        return 0;
}

/* getliney: read a line into s, return length */
int getliney(char s[], int lim)
{
        int c, i;

        for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
                s[i] = c;
        if (c == '\n') {
                s[i] =c;
                ++i;
        }
        s[i] = '\0';
        return i;
}

/* copy: copy 'from' into 'to'; assume to is bug enough */
void copy(char to[], char from[])
{
        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}
