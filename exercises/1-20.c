#include <stdio.h>
#define TABSTOP 4

int calcBlnks(int charCnt);

/* detab; replace tabs from input with blanks, maintaining tab stops */
void main(void)
{
        int c, x, blnksReq, charCnt;
        charCnt = 0;

        while ((c = getchar()) != EOF){
                ++charCnt;
                if (c == '\n') {
                        putchar(c);
                        charCnt = 0;
                }
                else if (c == '\t') {
                        blnksReq = calcBlnks(charCnt);
                        for (x = 0; x <= blnksReq; ++x)
                                putchar(' ');
                }
                else
                        putchar(c);
        }
}

/* calcBlnks: calculates the number of blanks required to make the tab stop */
int calcBlnks(int charCnt)
{
        int blnksReq;
        blnksReq = 0;

        if (charCnt >= TABSTOP)
                blnksReq = TABSTOP - (charCnt % TABSTOP);
        else
                blnksReq = TABSTOP - charCnt;

        return blnksReq;
}
