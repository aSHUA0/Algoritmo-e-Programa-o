#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "portuguese");
  	char nome[12] = "Formul�rio";
  	char nome2[30];
  	int idade;
  	char matricula[15];
  	char endereco[120];
  	char curso[30];
  	char periodo[20];
  	char materia[30];
  	float mensalidade;

  printf("%s", nome);
  printf("\nDigite o seu nome:");
  fgets(nome2, 30, stdin);
  

  printf("Digite sua idade %s", nome2);
  scanf("%d", &idade);

  fflush(stdin);
  printf("Digite a sua matricula %s", nome2);
  fgets(matricula, 15, stdin);

  printf("Digite o seu endere�o %s", nome2);
  fgets(endereco, 120, stdin);

  printf("Qual curso voce � matriculado?");
  fgets(curso, 30, stdin);

  printf("Qual o periodo?");
  fgets(periodo, 20, stdin);

  printf("De qual mat�ria � esse formul�rio?");
  fgets(materia, 30, stdin);
  
  printf("Qual � o valor da sua mensalidade %s", nome2);
  scanf("%f", &mensalidade);

  printf("Seu nome �:%s", nome2);
  printf("Sua idade �:%d", idade);
  printf("\nSua matricula �:%s", matricula);
  printf("Seu curso �:%s", curso);
  printf("Esse formul�rio pertence a mat�ria:%s", materia);
  printf("Sua mensalidade custa:%.2f", mensalidade);

  return 0;
}
