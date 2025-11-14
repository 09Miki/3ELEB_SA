#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, fatt = 1;
    printf("\nInserire numero: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        fatt = fatt * i;
    }
    printf("\n%d\n", fatt);
    return 0;
}