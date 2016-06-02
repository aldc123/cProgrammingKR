#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */
#define MINLINE 80      /* minimum input line size */

int getliney(char line[], int maxline);

/* print input lines > 80 && < 1000 chars
        getline renamed to getliney as getline
        already exists in stdio.h */
main()
{
        int len;                /* current line length */
        char line[MAXLINE];     /* current input line */
        char longest[MAXLINE];  /* longest line saved here */

        while ((len = getliney(line, MAXLINE)) > MINLINE)
                printf("%s", line);
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
