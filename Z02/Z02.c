#include <stdio.h>
#include <stdbool.h>

void printMas(short arr[], int size) {
	for (short i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void changeSort(short arr[], short size) {
	for (short i = 0; i < size - 1; i++) {
		short minind = i;

		for (short j = i + 1; j < size; j++) {
			if (arr[j] < arr[minind]) {
				minind = j;
			}
		}

		if (minind != i) {
				short box = arr[i];
				arr[i] = arr[minind];
				arr[minind] = box;
				printMas(arr, size);
		}
	}
	
}

int main(void) {
	short mas[10] = { 4, 7, 3, 9, 0, 6, 4, 7, 1, 2 };
	short size = 10;

	printf("Unsorted massive: ");
	printMas(mas, size);

	changeSort(mas, size);

	printf("Sorted massive: ");
	printMas(mas, size);

	return 0;
}