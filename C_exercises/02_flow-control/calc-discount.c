#include <stdio.h>

int main() {
    /* ����˿�����ÿλ300Ԫ���ܼ۳���3000���8��
    */
    int cusNum, perPrice = 300, discountPrice = 3000;
    double total;
    printf("Enter the number of customs: ");
    scanf("%d", &cusNum);
    total = perPrice * cusNum;

    if (total >= discountPrice) {
        total = total * 0.8;
    }
    printf("Total: ��%.2f\n", total);
    return 0;
}
