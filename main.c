#include <stdio.h>

int main()
{
    float (Num1); // Holds the first value
    float (Num2); // Holds the second value
    float (Sum); // Holds the value for sum of Num1+Num2
    printf("Please enter two number to find their sum\n");
    printf("Please enter the first numeric value\n");
    scanf("%f", &Num1);
    printf("Please enter the second numeric value\n");
    scanf("%f", &Num2);
    Sum = Num1+Num2; // Calculations
    printf("The sum for above numbers are :");
    printf("%f + %f = %f", Num1, Num2, Sum);
    return 0;
}