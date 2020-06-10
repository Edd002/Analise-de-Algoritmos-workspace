/*
 ============================================================================
 Name        : ListaAnaliseIterativosExercicio8.c
 Author      : Eduardo Augusto Lima Pereira
 Version     :
 Copyright   : Your copyright notice
 Description : Lista de Algoritmos Iterativos Exercício 8
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

int main(void) {
	setbuf(stdout, NULL);

	int M = 10;
	int N = 10;

	int** matriz = criarMuro(M, N);
	preencherMatrizUns(matriz, M, N);
	mostrarMuro(matriz, M, N);

	printf("\n\nA quantidade de uns na matriz é: %i ", quantidadeUns(matriz, M, N));

	return EXIT_SUCCESS;
}
