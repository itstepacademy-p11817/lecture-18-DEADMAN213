#include <stdio.h>
#include <stdbool.h>

void printMas(short arr[], int size) {
	for (short i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void bubleSort(short arr[], short size) {
	
	for (short i = 0; i < size - 1; i++) {
		bool flag = true;

		printf("\n");
		for (short j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				short box = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = box;
				printMas(arr, size);
				flag = false;
			}
		}

		if (flag) {
			break;
		}
	}
}

int main(void) {
	short mas[10] = { 4, 7, 3, 9, 0, 6, 4, 7, 1, 2 };
	short size = 10;

	printf("Unsorted massive: ");
	printMas(mas, size);

	bubleSort(mas, size);

	printf("Sorted massive: ");
	printMas(mas, size);

	return 0;
}