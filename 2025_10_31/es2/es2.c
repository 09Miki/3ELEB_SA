#include<stdlib.h>
#include<stdio.h>

int n;

int main(){
    printf("\nInserire numero intero: ");
    scanf("%d", &n);
    if(n < -100){
        printf("\nCodice 1\n");
    } else {
        if(n < 0){
            printf("\nCodice 2\n");
        } else {
            if(n < 50){
                printf("\nCodice 3\n");
            } else {
                if(n < 200){
                    printf("\nCodice 4\n");
                } else {
                    printf("\nCodice 5\n");
                }
            }
        }
    }
    return 0;
}