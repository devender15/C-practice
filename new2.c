#include <stdio.h>


int main() {

    int a,b,c;
    float avg;

    printf("Enter the value for a: \n");
    scanf("%d", &a);
    printf("Enter the value for b: \n");
    scanf("%d", &b);
    printf("Enter the value for c: \n");
    scanf("%d", &c);

    avg = (a+b+c)/3;

    printf("The average of these numbers is %f\n", avg);
    
    return 0;
}