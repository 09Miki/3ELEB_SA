#include<stdio.h>
#include<stdlib.h>
 
float n;
 
int main(){
    printf("\nInserire un numero: ");
    scanf("%f", &n);
    if(n > 0){
        printf("\nNumero inserito maggiore di 0\n");
    }
    return 0;
}