//Write a program to input two numbers and display their sum, difference, product, and quotient.
include <stdio.h>
int main()
{
    int num1,num2,sum,diff,prod,quot;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf ("%d", &num2);
    sum= num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    quot=num1/num2;
    printf(sum of %d and %d is %d\n", num1,num2,sum);
    printf("difference of %d and %d is %d\n", num1,num2,diff);
    printf("product of %d and %d is %d\n", num1 ,num2,prod);
    printf("quotient of %d and %d is %d\n", num1,num2,quot);
    return 0;
    }

