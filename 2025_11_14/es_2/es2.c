#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("\nInserire numero: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i ++){
        int primo = 0;
        for(int k = 2; k < i; k++){
            if(i % k == 0){
                primo = 1;
            }
        }
        if(primo == 0){
            printf("\n%d", i);
        }
    }
    return 0;
}