
#include <stdio.h>

int main() {
/* convert lower case char to upper case from user input
    and vice visa
*/
    char ch;
    printf("Case-Convert is READY!\n");

    printf("Enter a character:\n");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90) {
        printf("You Enter: %c.\nit's low case: %c.\n", ch, ch + 32);
        return 0;
    } else if (ch >= 97 && ch <= 122) {
        printf("You Enter: %c.\nIT'S UPPER CASE: %c.\n", ch, ch - 32);
        return 0;
    } else {
        printf("Enter from 'a' to 'z' or 'A' to 'Z', Try again!\n");
        return 0;
    }

}
