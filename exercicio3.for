#include <stdio.h>

int main() {
    int numero, n;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (n = 1; n <= 10; n++) {
        printf("%d x %d = %d\n", numero, n, numero * n);
    }

    return 0;
}
