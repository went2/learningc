#include <stdio.h>

main() {
    /* F = 1.8 * C + 32 */

    float celsius, fahr;
    /* ex1-4 in K&R
        print a celsius-fahrenheit table
        with celsiue from 1, 10, 20.. 150;

    int lower = -20, upper = 150, step = 10;

    celsius = lower;
    printf("===CELSIUS-FAHRENHEIT TABLE===\n");
    while(celsius <= upper) {
        fahr = celsius * 1.8 + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    */

    /* print fahr of corresponding celsius temperature from user input */
    printf("Enter a Celsius temperature: ");
    scanf("%f", &celsius);
    fahr = celsius * 1.8 + 32;
    printf("C: %4.1f\n", celsius);
    printf("F: %4.1f\n", fahr);
}
