//
//  length-of-words.c
//  
//
//  Created by WenTommy on 2022/7/6.
//

#include <stdio.h>

int main() {
    int c;
    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar('*');
    }
    return 0;
}
