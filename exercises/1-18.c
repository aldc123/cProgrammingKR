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

        while ((len = getliney(line, MAXLINE)) > 0) {
                removeB(nline, line);
                printf("%s", nline);
        }
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
        while (i >= 0) {
                if (to[i -2 ] == ' ' || to[i] == '\t') {
                        to[i - 2] = '\n';
                        to[i - 1] = '\0';
                        --i;
                }
                else
                        i = -1;
        }
}
