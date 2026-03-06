/*Program to check if a character is alphabet or not*/
#include <stdio.h>
int main() {
    char ch = 'a';
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
    return 0;
}