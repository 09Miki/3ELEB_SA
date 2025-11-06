#include<stdio.h>
#include<stdlib.h>
 
int a, b;
 
int main(){
    printf("\nInserire numero 'a': ");
    scanf("%d", &a);
    printf("\nInserire numero 'b': ");
    scanf("%d", &b);
    if(a < b){
        printf("\n%d è maggiore di %d\n", b, a);
    } else if(a > b){
        printf("\n%d è maggiore di %d\n", a, b);
    }
    return 0;
}