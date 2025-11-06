#include<stdio.h>
#include<stdlib.h>
 
int a, b, c;
 
int main(){
    printf("\nInserire tre numeri: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        if(a > c){
            printf("\n%d e' il piu' grande\n", a);
        }
    }
    if(b > a){
        if(b > c){
            printf("\n%d e' il piu' grande\n", b);
        }
    }
    if(c > a){
        if(c > b){
            printf("\n%d e' il piu' grande\n", c);
        }
    }
 
    return 0;
}