#include<stdio.h>
#include<stdlib.h>

float r, i, v;

int main(){
    printf("\nInserisci tensione in Volt: ");
    scanf("%f", &v);
    printf("\nInserisci resistenza in ohm: ");
    scanf("%f", &r);
    i = v / r;
    printf("\nCorrente elettrica = %.2f Ampere", i);
    return 0;
}