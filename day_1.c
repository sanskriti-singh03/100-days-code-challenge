//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    printf("enter first number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf ("%d", &num2);
    sum = num1 + num2;
    printf("sum of %d and %d is %d", num1, num2, sum);
    return 0;
}