//
//  check-syntax.c
//  
//  检测是否有不匹配的() [] {}
//  while(getchar)
//      pair(c)
//  test if there are unmatched parentheses, brackets and braces.
//
//  Created by WenTommy on 2022/7/7.
//

#include <stdio.h>

int brace, brack, paren;

void incomment();
void inquote(int c);
void pair(int c);

int main() {
    int c, d;
    extern int paren, brace, brack;
    
    while ((c=getchar()) != EOF) {
        if (c == '/') {
            if ((d=getchar()) == '*') {
                // 进入注释内，不检查
                incomment();
            }
            else
                pair(c);
        }
        else if (c=='\'' || c =='"')
            inquote(c);
        else
            pair(c);
    }
    
    if (brace > 0)
        printf("unmathed right braces\n");
    else if (brace < 0)
        printf("unmathed left braces\n");
    if (paren > 0)
        printf("unmathed right parenthesis\n");
    else if (paren < 0)
        printf("unmathed left parenthesis\n");
    if (brack > 0)
        printf("unmathed right brackets\n");
    else if(brack < 0)
        printf("unmathed left brackets\n");
    
    return 0;
}

void pair(int c) {
    extern int paren, brace, brack;
    
    if(c == '{')
        --brace;
    else if(c == '}')
        ++brace;
    else if(c== '[')
        --brack;
    else if(c== ']')
        ++brack;
    else if(c== '(')
        --paren;
    else if(c== ')')
        ++paren;
}

// 一对对取注释内的char，直到遇到注释结束 */
void incomment() {
    int c, d;
    c = getchar();
    d = getchar();
    while( c!= '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void inquote(int c) {

}
