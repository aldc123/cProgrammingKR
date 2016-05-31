#include <stdio.h>

/* print Celsius-Fehrenheit table
        for fahr = 0, 20, ..., 300 */
main()
{
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;      /* lower limit of temperature table */
        upper = 300;    /* upper limit */
        step  = 20;     /* step size */

        printf("cels\tfehr\n");

        celsius = lower;
        while (celsius <= upper) {
                fahr = celsius * (9.0/5.0) + 32.0;
                printf("%3.0f\t%6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
