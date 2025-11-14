#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int somma = 0;
    printf("\nInserire numero: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        if(i % 2 != 0){
            somma = somma + i;
        }
    }
    printf("\nLa somma dei numeri dispari da 1 a %d e' %d", n, somma);
    return 0;
}