#include<stdio.h>
#include<stdlib.h>

float distm, distkm, distcm, distmm;

int main(){
    printf("Inserisci una distanza in metri: ");
    scanf("%f", &distm);
    distkm = distm * 0.001;
    distcm = distm * 100;
    distmm = distm * 1000;
    printf("\nIn millimetri: %f\nIn centimetri: %f\nIn kilometri: %f\n", distmm, distcm, distkm);
    return 0;
}