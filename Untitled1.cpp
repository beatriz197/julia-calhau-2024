#include <stdio.h>
int main(){
	//Deni��o de vari�veis
	int a, b, c, d, e;
	
		printf("Digite tr�s n�meros intensivos:\n");
	//Entrada
	scanf("%d %d %d", &a, &b, &d);
	
	//Processamento
	c = a + b;
	e = c * d;
    printf("A soma de a + b =  %d" , c);
	printf("A multiplica��o de c * d = %d", e);
	return 0;
} 
