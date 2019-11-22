#include<stdio.h>
#include<stdlib.h>
 
 int main (void)
 {
 	char nome[100];
 	int idade;
 	printf("digite seu nome: \n");
 	scanf("%s", &nome);
 	printf("digite sua idade: \n");
 	scanf("%d", &idade);
 	printf("\n%s", nome);
 	printf("\n%d", idade);
 	printf("\n");
 	system("pause");
}

