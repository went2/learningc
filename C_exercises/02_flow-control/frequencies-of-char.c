//
//  frequencies-of-char.c
//  
//
//  Created by WenTommy on 2022/7/6.
//

#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int nchar[26];
    
    nwhite = nother = 0;
    for (i=0; i<26; ++i)
        nchar[i] = 0;
    
    while((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++nchar[c-'a'];
        else if (c >= 'A' && c <= 'Z')
            ++nchar[c-'A'];
        else if (c == '\n' || c=='\t' || c==' ')
            ++nwhite;
        else
            ++nother;
    }
    printf("character frequence(case insensitive):\n");
    for (i=0; i<26; ++i)
        printf("%c: %d \n", 65+i, nchar[i]);
    
    printf(", white space: %d, other: %d\n", nwhite, nother);
    return 0;
}
