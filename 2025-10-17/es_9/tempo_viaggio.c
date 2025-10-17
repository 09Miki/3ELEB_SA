#include<stdio.h>
#include<stdlib.h>

float dist, vel, tempo;

int main(){
    printf("\nInserire distanza in km: ");
    scanf("%f", &dist);
    printf("\nInserisci velocità in km/h: ");
    scanf("%f", &vel);
    tempo = dist / vel;
    printf("\nIl viaggio durerà %f ore\n", tempo);
    return 0;
}