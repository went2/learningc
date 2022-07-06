//
//  reverse-str.c
//  
//
//  Created by WenTommy on 2022/7/6.
//

#include <stdio.h>

#define MAXLINE 1000
int get_line(char line[], int lim);
void reverse_line(char s[]);

int main() {
    int len;
    char line[MAXLINE];
    
    while((len=get_line(line, MAXLINE)) > 0) {
        reverse_line(line);
        printf("%s", line);
    }
}

void reverse_line(char s[]) {
    int i=0, j=0;
    char temp;
    
    for(; s[i] != '\n'; ++i)
        ;
    
    --i;
    if(s[i] == '\n')
        --i;
    
    while(j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}

int get_line(char s[], int lim) {
    int i, c;
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
