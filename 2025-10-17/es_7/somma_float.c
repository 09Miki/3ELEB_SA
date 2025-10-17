#include<stdio.h>
#include<stdlib.h>



int main(){
    float num1, num2, somma, prodotto, quoz, diff;
    .\
    printf("\nInserisci due numeri: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    somma = num1 + num2;
    prodotto = num1 * num2;
    quoz = num1 / num2;
    diff = num1 - num2;
    printf("\nSomma = %f\nDifferenza = %f\nProdotto = %f\nQuoziente = %f\n", somma, diff, prodotto, quoz);
    return 0;
}