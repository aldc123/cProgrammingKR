#include <stdio.h>

#define MIN     0
#define MAX     300
#define STEP    20

float celsToFehr(float cels);

/* temperature coversion program using a function */
main()
{
        float cels, fehr;

        while (cels <= MAX) {
                fehr = celsToFehr(cels);
                printf("%3.0f %6.1f\n", cels, fehr);
                cels += STEP;
        }
        return 0;
}

/* function to convert celsius to fehrenheit */
float celsToFehr(float cels)
{
        float fehr;
        fehr = cels * (9.0/5.0) + 32;
        return fehr;
}
