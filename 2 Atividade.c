#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Crie um programa usando Struct com as informa��es abaixo: Nome,Idade,Peso,Altura
//Utilize os dados informados para solicitar estas informa��es de 5 usu�rios. Utilize vetor. Mostre os dados do usu�rio.

struct ficha_pessoa{
	char nome[250];
	int idade; 
	float peso, altura;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	struct ficha_pessoa pessoa[5];
	
	for (i=0; i<5;i++){
	
	
	//Solicitando dados do usuario
	printf("Digite seu nome: ");
	gets(pessoa[i].nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &pessoa[i].idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &pessoa[i].peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &pessoa[i].altura);
	
	fflush(stdin);
	printf("\n");
}
	
	system("cls");
	
	//Mostrando dados do usuario
	
	for (i=0;i<5;i++){
	
	printf("\nNome: %s \n",pessoa[i].nome);
	printf("Idade: %d \n", pessoa[i].idade);
	printf("Peso: %.1f \n", pessoa[i].peso);
	printf("Altura: %.1f \n",pessoa[i].altura);
}
	
	
	return 0;
}
