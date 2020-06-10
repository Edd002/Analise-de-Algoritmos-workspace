/*
 * Library.c
 *
 *  Created on: 2 de jun de 2019
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

void definirPosicaoPorta(int** matriz, int M, int N) {
	int i = 0;
	int j = 0;
	int elemento = (M * N) + (M * N);

	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			matriz[i][j] = elemento--;
		}
	}
}

int verificarElementoMatriz(int** matriz, int i, int j, int M, int N, int x) {
	if(matriz[i][j] == x) {
		return 1;
	} else {
		if (j < M)
			return verificarElementoMatriz(matriz, i, j + 1, M, N, x);
		if (i < N)
			return verificarElementoMatriz(matriz, i + 1, 0, M, N, x);
	}

	return -1;
}
