#include<stdio.h>
#include<stdlib.h>
 
int n;
 
int main(){
    printf("\nInserire un numero: ");
    scanf("%d", &n);
    if(n > 0){
        printf("\n%d e' positivo\n", n);
    } else if(n < 0){
        printf("\n%d e' negativo\n", n);
    } else {
        printf("\n%d e' uguale a 0\n", n);
    }
    return 0;
}