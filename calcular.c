#include <stdio.h>

int main() {
    int a;
    printf("Enter the value for a: \n", a);
    scanf("%d", &a);
    printf("The decimal value of a: %d\n", a);
    printf("The octal value of a: %o\n", a);
    printf("The hexadecimal value of a ( in lowercase ): %x\n", a);
    printf("The hexadecimal value of a ( in uppercase ): %X\n", a);
    return 0;
}