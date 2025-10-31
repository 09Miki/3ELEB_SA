#include<stdlib.h>
#include<stdio.h>

int n1, n2, n, s, d, m;
float dv;

int main(){
    printf("\n1 - Somma\n2 - Differenza\n3 - Moltiplicazione\n4 - Divisione\n");
    printf("Primo numero: ");
    scanf("%d", &n1);
    printf("Secondo numero: ");
    scanf("%d", &n2);
    printf("Operazione: ");
    scanf("%d", &n);
    if(n == 1){
        s = n1 + n2;
        printf("\n%d + %d = %d\n", n1, n2, s);
    } else if(n == 2){
        d = n1 - n2;
        printf("\n%d - %d = %d\n", n1, n2, d);
    } else if(n == 3){
        m = n1 * n2;
        printf("\n%d * %d = %d\n", n1, n2, m);
    } else if(n == 4){
        dv = (float)n1 / n2;
        printf("\n%d / %d = %.3f\n", n1, n2, dv);
    } else {
        printf("\nInput non valido\n");
    }
    return 0;
}