/*
 ============================================================================
 Name        : ListaAnaliseRecursivosExercicio6.c
 Author      : Eduardo Augusto Lima Pereira
 Version     :
 Copyright   : Your copyright notice
 Description : Lista de Algoritmos Recursivos Exercício 6
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

int main(void) {
	setbuf(stdout, NULL);

	int M = 10;
	int N = 10;
	int x = 0;

	int** matriz = criarMuro(M, N);
	definirPosicaoPorta(matriz, M, N);
	mostrarMuro(matriz, M, N);

	printf("\nInforme o elemento para buscar na matriz: ");
	fflush(stdin);
	scanf("%i", &x);

	printf("\n\nO elemento %i pertence a matriz? %i", x, verificarElementoMatriz(matriz, 0, 0, M, N, x));

	return EXIT_SUCCESS;
}
