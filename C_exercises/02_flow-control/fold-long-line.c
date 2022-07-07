//
//  fold-long-line.c
//  限制输出时每行最多显示的字符（如35个），超过则换行显示
//
//  Created by WenTommy on 2022/7/7.
//

#include <stdio.h>

#define MAXCOL  30
#define TABVAL  8
#define CURTAB(c)   (TABVAL - ( (c) % TABVAL ))
#define NO_BLANK    -1

int lastblank(char arr[], int len);

int main() {
    int c, lbc;
    int pos, col;
    int i, j;
    char line[MAXCOL + 1];
    
    while( (c=getchar()) != EOF ) {
        line[pos++] = c;
        col += (c == '\t') ? CURTAB(col) : 1;
        
        // 超过 MAXCOL 或遇到换行符开始显示
        if(col >= MAXCOL || c == '\n') {
            line[pos] = '\n';
            
            if((lbc = lastblank(line, pos)) == NO_BLANK) {
                for (i=0; i<pos; ++i) {
                    putchar(line[i]);
                }
                col = pos = 0;
            } else {
                for(i=0; i<lbc; ++i) {
                    putchar(line[i]);
                }
                for(i=0, j=lbc+1, col=0; j<pos; ++i, ++j) {
                    line[i] = line[j];
                    col += (c == '\t') ? CURTAB(col) : 1;
                }
                pos = i;
            }
            putchar('\n');
        }
    }
    return 0;
}

int lastblank(char arr[], int len) {
    int i, lbc = -1;
    
    for(i=0; i<len; ++i) {
        if(arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n') {
            lbc = i;
        }
    }
    return lbc;
}

