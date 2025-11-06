#include<stdio.h>
#include<stdlib.h>
 
int n;
 
int main(){
    printf("\nInserire un numero: ");
    scanf("%d", &n);
    if(n > 0 && n % 3 == 0){
        printf("\n%d e' maggiore di 0 e divisibile per 3\n", n);
    }
    return 0;
}