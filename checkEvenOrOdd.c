#include <stdio.h>

int main() {

    int num;
    
    printf("Enter the value of num: \n");
    scanf("%d", &num);

    if(num%2==0) {
        printf("The entered by you is even number.\n");
    }
    else {
        printf("The entered by you is odd number.\n");
    }

    return 0;
}