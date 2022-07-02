#include <stdio.h>

main() {
    /* print Fahrenheit-Celsius table
        from K&R
        1. integer version

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        // not work with this sequence
        // celsius = 5 / 9 * (fahr - 32);
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    */

    /* floating point version */
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahrenheit-Celsius Tabel\n");

    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
