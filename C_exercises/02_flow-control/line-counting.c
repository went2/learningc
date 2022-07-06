//
//  line-counting.c
//  
//
//  Created by WenTommy on 2022/7/6.
// 将输入的多个空格，压缩为1个空格输出：默认输出字符，且lastc=getchar()，当输入为' '时
// 检测上一个是否为' '，不是则输出，是则不输出
//
//

#include <stdio.h>

#define NONBLANK '-'

int main() {
    int c, lastc;
    int n1 = 0, t1 = 0, b1 = 0;
    lastc = NONBLANK;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++n1;
        }
        if (c == '\t') {
            ++t1;
        }
        if (c == ' ') {
            ++b1;
            if (lastc != ' ') {
                putchar(c);
            }
        } else {
            putchar(c);
        }
        lastc = c;
    }
    printf("line(s): %d\ntab(s): %d\nblank(s): %d\n", n1, t1, b1);
    return 0;
}
