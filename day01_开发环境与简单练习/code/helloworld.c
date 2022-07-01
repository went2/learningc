#include <stdio.h>

int main() {
    printf("cerer\b");
    /*
    int integer, sum;
    printf("Enter the first integer: ");
    scanf("%d", &integer);
    sum = integer;
    printf("Enter the second integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Enter the third integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Sum is %d.\n", sum);
    return 0;
    */

    // swap two int values
    int integer1, integer2;
    printf("Enter the first integer: ");
    scanf("%d", &integer1);
    printf("Enter the second integer: ");
    scanf("%d", &integer2);

    /*
    int temp = integer1;
    integer1 = integer2;
    integer2 = temp;
    */

    // another version of swap
    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    printf("integer1: %d\n", integer1);
    printf("integer2: %d\n", integer2);
}
