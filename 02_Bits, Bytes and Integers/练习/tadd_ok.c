#include <stdio.h>

int tadd_ok(int x, int y) {
    /*  Detemine whether arguments can be added without overflow
        return 1 if not overflow
    */
    int sum  = x + y;
    int neg_over = (x < 0) && (y < 0) && (sum >= 0);
    int pos_over = (x >= 0) && (y >= 0) && (sum < 0);
    return !neg_over && !pos_over;
}

int main() {
    int x = 45, y = 56;
    printf("sizeof int: %d\n", sizeof(int));
    printf("%d + %d will not overflow: %d", x, y, tadd_ok(x, y));
    return 0;
}
