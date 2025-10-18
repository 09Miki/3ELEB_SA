#include<stdio.h>
#include<stdlib.h>

float a, fo, p;

int main(){
    printf("\nInserisci forza in Newton: ");
    scanf("%f", &fo);
    printf("\nInserisci area in metri quadrati: ");
    scanf("%f", &a);
    p = fo / a;
    printf("\nPressione = %.2f Pa", p);
    return 0;
}