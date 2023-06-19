#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos.
//Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais.

struct ficha_aluno{
	char nome[250];
	int matricula, codDisciplina;
	float notas[2];
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,j:
		
		struct ficha_aluno alunos[3];
		
		for (i=0;i<3,i++){
			printf("Digite o nome do aluno: ")
		}
}
