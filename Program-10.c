#include <stdio.h>

int main()
{
    float num1, num2;
    float *ptr1, *ptr2;
    float sum, diff, prod, div;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter any two numbers: ");
    scanf("%f %f", ptr1, ptr2);
    sum  = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    prod = (*ptr1) * (*ptr2);
    div  = (*ptr1) / (*ptr2);
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", prod);
    printf("Quotient = %.2f\n", div);
    return 0;
}
