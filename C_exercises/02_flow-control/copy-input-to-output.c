#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("EOF value is: %d\n", EOF);
    return 0;
}
