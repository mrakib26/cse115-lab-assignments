#include<stdio.h>
#include<math.h>
int main() {
    float P, annualRate, r, EMI;
    int n;

    printf("Enter loan amount (Principal): ");
    scanf("%f", &P);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &annualRate);
    printf("Enter loan tenure (in months): ");
    scanf("%d", &n);

    r = (annualRate / 12) / 100;
    EMI = (P * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

    printf("Monthly EMI = %.2f\n", EMI);

    return 0;
}

