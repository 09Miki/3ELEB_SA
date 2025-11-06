#include<stdio.h>
#include<stdlib.h>
int a, b, c;
 
int main(){
    printf("\nInserire tre possibili lunghezze: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b + c){
        if(b < a + c){
            if(c < a + b){
                printf("\nTriangolo valido\n");
            }
        }
    }
    return 0;
}