/*
 ============================================================================
 Name        : ListaAnaliseIterativosExercicio7.c
 Author      : Eduardo Augusto Lima Pereira
 Version     :
 Copyright   : Your copyright notice
 Description : Lista de Algoritmos Iterativos Exercício 7
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
	// Outro teste
	/*
	matriz[9][9] = 0;
	matriz[7][0] = 1;
	matriz[7][1] = 1;
	matriz[7][2] = 1;
	matriz[7][3] = 1;
	matriz[7][4] = 1;
	matriz[7][5] = 1;
	matriz[7][6] = 1;
	matriz[7][7] = 1;
	matriz[7][8] = 1;
	matriz[7][9] = 1;
	*/

	mostrarMuro(matriz, M, N);

	printf("\n\nA linha com maior quantidade de uns é: LINHA %i ", quantidadeUns(matriz, M, N));

	return EXIT_SUCCESS;
}
