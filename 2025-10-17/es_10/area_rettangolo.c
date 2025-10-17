#include<stdio.h>
#include<stdlib.h>

float base, altezza, area;

int main(){
    printf("\nInserire base e altezza del rettangolo:");
    scanf("%f, %f", &base, &altezza);
    area = base * altezza;
    printf("\nArea = %f\n", area);
    return 0;
}