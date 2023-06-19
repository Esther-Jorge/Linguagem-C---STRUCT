#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e 
//nota da terceira prova.(a) Permita ao usuário entrar com os dados de 5 alunos; (b) Informe a maior nota da primeira prova; (c) Informe a maior media geral;
//(d) Informe a menor media geral; (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

struct ficha_aluno{
	int matricula;
	float notas[3];
	float media;
	char nome[250];
	
};

float calcularMedia(float notas[]){
	int i;
	float media, somaNotas = 0;
	for (i=0; i<3; i++){
		somaNotas += notas[i];
	}
	media = somaNotas/3;
	return media;
}

float situacao(float notas[]){
	
	float media[i];
	
	if (media[i] > 7){
		printf("APROVADO");
	}else{
		printf("REPROVADO");
	}
	return sitacao;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,j;
	
	struct ficha_aluno alunos[5];
	
	//Solicitando dados
	
	for (i=0; i<5; i++){
		
		printf("Digite o nome do aluno: ");
		gets(alunos[i].nome);
		
		printf("Matricula: ");
		scanf("%d",&alunos[i].matricula);
				
				for (j=0; j<3;j++){
				
		printf("Digite a %dª nota: ", j+1);
		scanf("%d", &alunos[i].notas[j]);
	}
		
		
		fflush(stdin);
		printf("\n");
		
		alunos[i].media = calcularMedia(alunos[i].notas);
	}
	
	//Mostrando dados
	
	for (i=0;i<5;i++){
		printf("Nome: %s \n",alunos[i].nome);
		printf("Matricula: %d \n",alunos[i].matricula);
		
		for (j=0; j<3;j++){
			printf("%dª nota: %.1f \n", j+1, alunos[i].notas[j]);
		}
		printf("Media: %.1f \n\n",alunos[i].media);
	}
	
	printf("Maior nota da primeira prova: ");
	printf("");
	
	return 0;
}
