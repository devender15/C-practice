#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter the values for num1 and num2: \n");
    scanf("%d%d", &num1, &num2);

    if(num1 < num2) {
        printf("%d is less than %d \n", num1, num2);
    }
    if(num2 < num1) {
        printf("%d is less than %d \n", num2, num1);
    }
    if(num1 == num2) {
        printf("%d is equal to %d \n", num1, num2);
    }
    if(num1 <= num2) {
        printf("%d is less than or equal to %d \n", num1, num2);
    }
    if(num1 >= num2) {
        printf("%d is greater than or equal to %d \n", num1, num2);
    }


    return 0;
}