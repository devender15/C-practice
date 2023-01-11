#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HELLO";
    printf("The reverse of the string is %s\n", strrev(str));
    printf("The lowercase of the string is %s\n", strlwr(str));
    printf("The UPPERCASE of the string is %s\n", strupr(str));
    printf("The length of the string is %d\n", strlen(str));
    return 0;
}