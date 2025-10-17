#include<stdio.h>
#include<stdlib.h>

float base, altezza, area;

int main(){
    printf("\nInserire base e altezza del triangolo:");
    scanf("%f, %f", &base, &altezza);
    area = base * altezza / 2;
    printf("\nArea = %.2f\n", area);
    return 0;
}