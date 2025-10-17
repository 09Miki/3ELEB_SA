#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float c1, c2, i;

int main(){
    printf("\nInserire cateto 1: ");
    scanf("%f", &c1);
    printf("\nInserire cateto 2: ");
    scanf("%f", &c2);
    i = sqrtf(powf(c1, 2) + powf(c2, 2));
    printf("\nIpotenusa = %.2f\n", i);
    return 0;
}