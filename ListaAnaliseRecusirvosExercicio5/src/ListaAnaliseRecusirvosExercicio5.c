/*
 ============================================================================
 Name        : ListaAnaliseRecusirvosExercicio5.c
 Author      : Eduardo Augusto Lima Pereira
 Version     :
 Copyright   : Your copyright notice
 Description : Lista de Algoritmos Recursivos Exercício 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

int main(void) {
	setbuf(stdout, NULL);

	int array[] = { 5, 9, 3, 1, 4, 6, 7, 2, 0, 8 };
	int n = sizeof(array) / sizeof(array[0]);

	ordenarSelecao(array, 0, n);
	exibirArray(array, n);

	return EXIT_SUCCESS;
}
