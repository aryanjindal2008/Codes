#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = principal * pow((1.0 + rate / 100.0), time) - principal;

    printf("\nSimple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
