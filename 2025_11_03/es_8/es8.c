#include<stdio.h>
#include<stdlib.h>
int x, y;
int main(){
    printf("\nInserire due numeri: ");
    scanf("%d %d", &x, &y);
    if(x > 0){
        if(y > 0){
            printf("\nEntrambi i numeri sono maggiori di 0\n");
        } else if(y < 0){
            printf("\nSolo uno e' maggiore di zero\n");
            }
    } else {
        if(y > 0){
            if(x < 0){
            printf("\nSolo uno e' maggiore di zero\n");
            }
        }
    }
    return 0;
}