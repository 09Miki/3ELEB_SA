#include<stdio.h>
#include<stdlib.h>

int n1, n2;
float media;

int main(){
    printf("\nInserisci 2 numeri interi:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    media = (n1 + n2) / 2.0;
    printf("\nMedia = %f\n", media);
    return 0;
}