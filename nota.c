#include<stdio.h>

int main(){/*função principal*/
float soma,nota1,nota2,nota3,media;
soma=0;
media=0;

printf("\t Digite a[1]ªnota : ");
scanf("%f",&nota1);

printf("\t Digite a[2]ªnota : ");
scanf("%f",&nota2);

printf("\t Digite a[3]ªnota : ");
scanf("%f",&nota3);

soma=nota1+nota2+nota3;
media=soma/3;
printf("Media = %.1f ",media );
return 0;
}
