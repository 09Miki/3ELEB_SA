#include<stdio.h>
#include<stdlib.h>

float i, v, p;

int main(){
    printf("\nInserisci tensione in Volt: ");
    scanf("%f", &v);
    printf("\nInserisci correntein Ampere: ");
    scanf("%f", &i);
    p = v * i;
    printf("\nPotenza elettrica = %.2f Watt\n", p);
    return 0;
}