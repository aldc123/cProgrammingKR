#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getliney(char line[], int maxline);
void removeB(char to[], char from[]);

/* program to removing trailing blanks & tabs from input lines
        also to delete entirely blank lines.
        getline renamed to getliney as getline
        already exists in stdio.h */
main()
{
        int len;                /* current line length */
        char line[MAXLINE];     /* current input line */
        char nline[MAXLINE];    /* modified line without blanks */

        while ((len = getliney(line, MAXLINE)) > 0)
                removeB(nline, line);
                if (len > 0)            /* there was a line with more than just '\n' */
                        printf("%s", nline);
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

/* removeB: copy 'from' into 'to'; removing blanks from the end */
void removeB(char to[], char from[])
{
        int i;

        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
        for (; to[i] == ' ' || to[i] == '\t'; --i)
                to[i] = '\0';
}
