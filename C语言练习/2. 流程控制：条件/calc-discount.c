#include <stdio.h>

int main() {
    /* 输入顾客数，每位300元，总价超过3000则打8折
    */
    int cusNum, perPrice = 300, discountPrice = 3000;
    double total;
    printf("Enter the number of customs: ");
    scanf("%d", &cusNum);
    total = perPrice * cusNum;

    if (total >= discountPrice) {
        total = total * 0.8;
    }
    printf("Total: ￥%.2f\n", total);
    return 0;
}
