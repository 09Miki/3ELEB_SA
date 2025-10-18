#include<stdio.h>
#include<stdlib.h>

float n1, n2, n3, p1, p2, p3, mp;

int main(){
    printf("\nInserisci trenumeri reali: ");
    scanf("%f, %f, %f", &n1, &n2, &n3);
    printf("\nInserisci tre rispettivi pesi: ");
    scanf("%f, %f, %f", &p1, &p2, &p3);
    mp = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    printf("\nLa media pesata dei valori inseriti è: %.2f\n", mp);
    return 0;
}