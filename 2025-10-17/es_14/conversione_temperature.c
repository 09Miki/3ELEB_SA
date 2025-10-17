#include<stdio.h>
#include<stdlib.h>

float C, F, K;

int main(){
    printf("\nInserisci temperature in Celsius: ");
    scanf("%f", &C);
    F = C * 1.8 + 32;
    K = C + 273.15;
    printf("\nTemperatura in Fahrenheit: %.2f\nTemperatura in Kelvin: %.2f\n", F, K);
    return 0;
}