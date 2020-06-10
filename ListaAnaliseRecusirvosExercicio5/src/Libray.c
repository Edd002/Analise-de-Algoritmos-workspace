/*
 * Libray.c
 *
 *  Created on: 2 de jun de 2019
 *      Author: Eduardo Augusto Lima Pereira
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

void trocar(int array[], int i, int j) {
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

void ordenarSelecao(int array[], int i, int n) {
	int min = i;
	for (int j = i + 1; j < n; j++) {
		if (array[j] < array[min])
			min = j;
	}

	trocar(array, min, i);
	if (i + 1 < n)
		ordenarSelecao(array, i + 1, n);
}

void exibirArray(int array[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
}
