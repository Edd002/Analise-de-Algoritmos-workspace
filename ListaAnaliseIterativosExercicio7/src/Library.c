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
	int limiteN = 0;

	for (i = 0; i < M; i++) {
		j = 0;
		while (j <= limiteN) {
			matriz[i][j] = 1;
			j++;
		}

		if (limiteN < (N - 1))
			limiteN++;
	}
}

int quantidadeUns(int** matriz, int M, int N) {
	int i = 0;
	int j = 0;
	int colunaPrimeiroZero = 0;
	int linhaMaiorQuantidadeUns = 0;

	while (i < M) {
		if (matriz[i][j] == 0 || j == N) {
			if (j > colunaPrimeiroZero) {
				colunaPrimeiroZero = j;
				linhaMaiorQuantidadeUns = i + 1;
			}
			i++;
		} else {
			j++;
		}
	}

	return linhaMaiorQuantidadeUns;
}
