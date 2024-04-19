/******************************************************************************

Crie um procedimento que recebe um inteiro X por parâmetro e imprime os valores de 1 até X (inclusive).

*******************************************************************************/
#include <stdio.h>
void imprimeX(int x) {
    for (int i = 1; i <= x; i++) {
        printf("%d\n ", i);
    }
}
int main() {
    int x;
    printf("Insira o valor de X: ");
    scanf("%d", &x);
   
    imprimeX(x);
    return 0;
}
