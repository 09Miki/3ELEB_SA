#include<stdio.h>
#include<stdlib.h>
 
int n;
 
int main(){
    printf("\nInserire un numero: ");
    scanf("%d", &n);
    if(n > 10 && n < 20){
        printf("\n%d si trova nell'intervallo [10,20]\n", n);
    } else {
        printf("\n%d non si trova nell'intervallo [10,20]\n", n);
    }
    return 0;
}