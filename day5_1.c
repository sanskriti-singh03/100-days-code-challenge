//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main() 
{
    double principal, rate, time, simple_interest, compound_interest, amount;
    int i;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;

    amount = principal;
    for(i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100.0);
    }
    compound_interest = amount - principal;

    printf("Simple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}