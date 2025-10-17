#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float r, h, v;

int main(){
    printf("\nInserire raggio del cilindro: ");
    scanf("%f", &r);
    printf("\nInserire altezza del cilindro: ");
    scanf("%f", &h);
    v = M_PI * powf(r, 2) * h;
    printf("\nVolume = %.2f\n", v);
    return 0;
}