#include <stdio.h>
#include <stdlib.h>

int num1 = 10;
int num2 = 5;
int somma, diff, prodotto, quoz;

int main(){
    somma = num1 + num2;
    diff = num1 - num2;
    prodotto = num1 * num2;
    quoz = num1 / num2;
    printf("\nSomma = %d\nDifferenza = %d\nProdotto = %d\nQuoziente = %d\n", somma, diff, prodotto, quoz);
    return 0;
}