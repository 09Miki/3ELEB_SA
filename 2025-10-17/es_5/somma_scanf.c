#include<stdio.h>
#include<stdlib.h>

int num1, num2, somma, prodotto;

int main(){
    printf("\nInserisci 2 numeri interi: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    somma = num1 + num2;
    prodotto = num1 * num2;
    printf("\nSomma = %d\nProdotto = %d\n", somma, prodotto);
    return 0;
}