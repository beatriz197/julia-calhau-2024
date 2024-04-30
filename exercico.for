#include <stdio.h>

int main() {
    int numero;

    for (;;) {
        printf("Digite um numero de 0 a 10: \n ");
        scanf("%d", &numero);

        if (numero <= 10) {
            break;
        }else{
            printf("valor invalido. \n");
        }
    }

    printf("Você digitou o número certo. Fim do programa.\n");

    return 0;
}
