#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Implemente um programa que leia o nome, a idade e o endere�o de uma pessoa e armazene os dados em uma estrutura. Mostre os dados do usu�rio.


struct ficha_pessoa{
	char nome[250], endereco[250];
	int idade;
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct ficha_pessoa pessoa;
	
	//Solicitando dados
	printf("Digite seu nome: ");
	gets(pessoa.nome);
	
	printf("Digite seu endere�o: ");
	gets(pessoa.endereco);
	
	printf("Digite sua idade: ");
	scanf("%i", &pessoa.idade);
	
	system("cls");	
	
	
	//Mostrando dados
	printf("\nNome: %s \n",pessoa.nome);
	printf("Idade: %d anos \n", pessoa.idade);
	printf("Endere�o: %s \n",pessoa.endereco);
	
	
	
	return 0;
}
