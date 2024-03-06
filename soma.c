#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    long long int x, y;
    printf("Digite dois números inteiros:");
    scanf("%lld %d", &x, &y);
    printf("O número %lld multiplicado por 4 bilhões é %lld", x, x * 4000000000);
    printf("O número %lld multiplicado por 4 bilhões é %lld", y, y * 4000000000);
    return 0;
}
