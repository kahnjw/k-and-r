#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

/* print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 30 
 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    fahr = LOWER;

    while(fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}
