#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Implemente um programa que leia as informações de um livro com os seguintes dados: Nome, Autor, Categoria, Preço
//Armazene os dados em uma estrutura com vetor para 3 livros. Mostre os dados do livro.

struct ficha_livro{
	char nome[250];
	char autor[250];
	char categoria[250];
	float preco;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	struct ficha_livro livros[3];
	
	for(i = 0; i < 3; i++){
		printf("Digite o nome do livro: ");
		gets(livros[i].nome);
		
		printf("Digite o nome do autor: ");
		gets(livros[i].autor);
		
		printf("Digite a categoria: ");
		gets(livros[i].categoria);
		
		printf("Digite o preço do livro: ");
		scanf("%f", &livros[i].preco);
		
		fflush(stdin);
		printf("\n");
	
	}
	
	   system("cls");
		printf("\n");
	
      for(i = 0; i < 3; i++){
      	
		printf("\nNome do livro: %s \n", livros[i].nome);
		printf("Nome do autor: %s \n",livros[i].autor);
		printf("Categoria: %s \n",livros[i].categoria);
		printf("Preço: %.2f \n", &livros[i].preco);
	}
	
	return 0;
}
