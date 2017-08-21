#include <stdio.h>
#include <stdbool.h>

void printMas(short arr[], int size) {
	for (short i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void quickSortForPair(short arr[], short lo, short hi) {
	if (lo >= hi) {
		return;
	}

	short op = 0;
	if (((lo + hi) / 2) % 2 == 0) {
		op = arr[(lo + hi) / 2];
	}
	else {
		op = arr[(lo + hi) / 2 + 1];
	}

	short i = lo;
	short j = hi;

	printf("\n");
	while (i < j) {
		while (arr[i] < op) {
			i += 2;
		}
		while (arr[j] > op) {
			j -= 2;
		}

		if (i <= j) {
			short box = arr[i];
			arr[i] = arr[j];
			arr[j] = box;

			box = arr[i + 1];
			arr[i + 1] = arr[j + 1];
			arr[j + 1] = box;

			//printf("%i %i %i: ", lo, hi, (lo + hi) / 2);
			printMas(arr, 10);
			i += 2;;
			j -= 2;
		}
	}
	quickSortForPair(arr, lo, j);
	quickSortForPair(arr, i, hi);
}


int main(void) {
	short mas[10] = { 4, 7, 3, 9, 0, 6, 4, 7, 1, 2 };
	short size = 10;

	printf("Unsorted massive: ");
	printMas(mas, size);

	quickSortForPair(mas, 0, size - 2);

	printf("Sorted massive: ");
	printMas(mas, size);

	return 0;
}