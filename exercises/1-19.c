#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getliney(char line[], int maxline);
void reverse(char s[]);

/* program to reverse the character string a line at a time
        getline renamed to getliney as getline
        already exists in stdio.h */
main()
{
        int len;                /* current line length */
        char line[MAXLINE];     /* current input line  */

        while ((len = getliney(line, MAXLINE)) > 0) {
                reverse(line);
                printf("%s", line);
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

/* reverse: reverse order of passed character array */
void reverse(char s[])
{
        int i, j, len;
        char tempS[MAXLINE];

        i = 0;
        while ((tempS[i] = s[i]) != '\0')
                ++i;

        len = i - 1;
        for (j = 0; j < len; ++j) {
                s[j] = tempS[i];
                --i;
        }
}
