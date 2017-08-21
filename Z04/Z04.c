#include <stdio.h>
#include <stdbool.h>

void printMas(short arr[], int size) {
	for (short i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void quickSort(short arr[], short lo, short hi) {
	if (lo >= hi) {
		return;
	}

	short op = arr[(lo + hi) / 2];
	short i = lo;
	short j = hi;

	printf("\n");
	while (i < j) {
		while (arr[i] < op) {
			i++;
		}
		while (arr[j] > op) {
			j--;
		}

		if (i <= j) {
			short box = arr[i];
			arr[i] = arr[j];
			arr[j] = box;
			printf("%i %i %i: ", lo, hi, (lo + hi) / 2);
			printMas(arr, 10);
			i++;
			j--;
		}
	}
	quickSort(arr, lo, j);
	quickSort(arr, i, hi);
}

int main(void) {
	short mas[10] = { 4, 7, 3, 9, 0, 6, 4, 7, 1, 2 };
	short size = 10;

	printf("Unsorted massive: ");
	printMas(mas, size);

	quickSort(mas, 0, size - 1);

	printf("Sorted massive: ");
	printMas(mas, size);

	return 0;
}