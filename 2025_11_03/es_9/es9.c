#include<stdio.h>
#include<stdlib.h>
int n;
int main(){
    printf("\nInserire un numero: ");
    scanf("%d", &n);
    if(n > 0){
        if(n < 100){
            printf("\nNumero nell'intervallo (1,100)\n");
        }
    } else if(n < 0){
        printf("\nNumero minore di 0\n");
    }
    return 0;
}