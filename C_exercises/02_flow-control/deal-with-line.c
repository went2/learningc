//
//  deal-with-line.c
//  
//
//  Created by WenTommy on 2022/7/6.
//

#include "deal-with-line.h"
#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 20

int main() {
    int len;
    char line[MAXLINE];
    
    while((len = getLine(line)) > 0) {
        if (len > LIMIT) {
            printf("%s", line);
        }
    }
    return 0;
}

int getLine(char line[]) {
    int c, i;
    
    for (i=0;
         i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n';
         ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
