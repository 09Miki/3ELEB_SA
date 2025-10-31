#include<stdlib.h>
#include<stdio.h>

int n1, n2, s, d, p;
float r;

int main(){
    printf("\nInserire due numeri interi: ");
    scanf("%d %d", &n1, &n2);
    s = n1 + n2;
    d = n1 - n2;
    p = n1 * n2;
    r = (float)n1 / n2;
    printf("\nSomma: %d\nDifferenza: %d\nProdotto: %d\nRapporto: %.2f\n", s, d, p, r);
    return 0;
}