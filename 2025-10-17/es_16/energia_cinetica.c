#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float m, v, ec;

int main(){
    printf("\nInserisci massa in kg: ");
    scanf("%f", &m);
    printf("\nInserisci velocità in m/s: ");
    scanf("%f", &v);
    ec = (m * powf(v, 2)) / 2;
    printf("\nEnergia cinetica = %.2f J", ec);
    return 0;
}