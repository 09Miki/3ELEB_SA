#include<stdio.h>
#include<stdlib.h>
 
int x;
 
int main(){
    printf("\nInserire un numero: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("\nNumero inserito pari\n");
    } else {
        printf("\nNumero inserito dispari\n");
    }
    return 0;
}