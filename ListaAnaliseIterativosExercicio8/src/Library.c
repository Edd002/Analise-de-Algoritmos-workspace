/*
 * Library.c
 *
 *  Created on: 23 de mar de 2019
 *      Author: Eduardo Augusto Lima Pereira
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

int** criarMuro(int M, int N) {
	int i = 0;

	int** matriz = (int**) calloc(M, sizeof(int*));
	for (i = 0; i < M; i++)
		matriz[i] = (int*) calloc(N, sizeof(int));

	return matriz;
}

void mostrarMuro(int** matriz, int M, int N) {
	int i = 0;
	int j = 0;

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%i ", matriz[i][j]);
		printf("\n");
	}
}

// Preenchimento arbitrário seguindo a regra de em linhas zeros vir antes de uns
void preencherMatrizUns(int** matriz, int M, int N) {
	int i = 0;
	int j = 0;
	int limiteN = N;

	for (i = 0; i < M; i++) {
		j = 0;
		while (j < limiteN) {
			matriz[i][j] = 1;
			j++;
		}

		if (limiteN > 0)
			limiteN--;
	}
}

int quantidadeUns(int** matriz, int M, int N) {
	int i = 0;
	int j = 0;
	int quantidadeUns = 0;

	while (i < M) {
		if (matriz[i][j] == 0 || j == N) {
			i++;
			j = 0;
			continue;
		}

		j++;
		quantidadeUns++;
	}

	return quantidadeUns;
}
