//
//  remove-trailing-blanks.c
//  
//
//  Created by WenTommy on 2022/7/6.
//

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int lim);
int remove_trail(char rline[]);

int main() {
    int len;
    char line[MAXLINE];
    
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (remove_trail(line) > 0) {
            printf("%s", line);
        }
    }
    return 0;
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

/* To remove Trailing Blanks,tabs. Go to End and proceed backwards removing */
int remove_trail(char s[]) {
    int i;
    for (i=0; s[i]!='\n'; ++i)
        ;
    --i;
    
    for (; ((s[i] == ' ') || (s[i] =='\t')); --i)
        ;
    
    if(i>=0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
