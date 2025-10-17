#include<stdio.h>
#include<stdlib.h>

int anni, secondi;

int main(){
    printf("\nInserisci la tua età: ");
    scanf("%d", &anni);
    secondi = 60 * 60 * 24 * 365 * anni;
    printf("\nHai %d secondi di vita\n", secondi);
    return 0;
}