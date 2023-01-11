#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value for a: \n", a);
    scanf("%d", &a);
    printf("Enter the value for b: \n", b);
    scanf("%d", &b);
    printf("Sum of the these two numbers is: %d\n", a + b);
    printf("Subtraction of the these two numbers is: %d\n", a - b);
    printf("Division of the these two numbers is: %d\n", a / b);
    printf("Product of the these two numbers is: %d\n", a * b);
    printf("Modulus of the these two numbers is: %d\n", a % b);
    return 0;
}