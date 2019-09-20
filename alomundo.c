/*
 ============================================================================
 Name        : alomundo.c
 Author      : Rafael Oliveira Paulino
 Version     :
 Copyright   : Fumec
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void alocarVetor(int *somaTotal) {
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	tamanho=receberInteiro(); //solicitar o tamanho ao usuário
	//int vetor[] = new int[tamanho];
	int v[tamanho];
	int *vetor;
	vetor=&v;
	preencherVetor(*vetor, tamanho);
}

int preencherVetor(int *vetor, int tamanho) {
	//int vetor[tamanho];
	int x, soma=0;
	vetor = (int *) malloc(tamanho * sizeof(int));
	for (x=0; x<tamanho; x++) {
		//printf("Digite os dados para posição %d do vetor: ", x);
		//scanf("%d",&vetor[x]);
		vetor[x]=receberInteiro();
		soma +=vetor[x];
		//printf("vetor[%d] = %d: \n", x, vetor[x]);
	}
	return &soma;
}

int receberInteiro() {
	setbuf(stdout, NULL);
	int num;
	do {
			printf("Digite um numero inteiro e positivo: ");
			fflush(stdin);
			scanf("%d",&num);
		}while (num<0);
	//printf("\nO número digitado é: %d.\n", num);
	return num;
}

int main(void) {
	int somaTotal=0;
	somaTotal=alocarVetor(int *somaTotal);
	printf("A soma dos elementos do vetor é: ",somaTotal);

	//printf("A soma dos elementos do vetor é: ",alocarVetor(int *somaTotal));
	//int vetor[6]={1,2,3,4,5,6};
	//int tamanho=6;


	//preencherVetor(int *vetor, int tamanho);
	/*int num;
	setbuf(stdout, NULL);
	printf("Digite um numero inteiro e positivo: ");
	fflush(stdin);
	scanf("%d",&num);
	//validar
	printf("\nO número digitado é: %d.\n", num); */
}
