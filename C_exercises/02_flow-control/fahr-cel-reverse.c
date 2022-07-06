#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void convert(void);

void convert() {
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5. / 9.) * (fahr - 32));
    }
}

int main() {
    convert();
    return 0;
}
