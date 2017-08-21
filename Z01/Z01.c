#include <stdio.h>
#include <stdbool.h>

void printMas(short arr[], int size) {
	for (short i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
	printf("\n");
}

void insertSort(short arr[], short size) {
	for (short i = 1; i < size; i++) {
		bool flag = true;
		//short temp = arr[i];
		short ind = i - 1;

		while (ind >= 0 && arr[ind + 1] < arr[ind]) {
			if (flag) {
				printf("\n");
			}

			short box = arr[ind + 1];
			arr[ind + 1] = arr[ind];
			arr[ind--] = box;
			printMas(arr, size);
			flag = false;
		}
		if (!flag) {
			printf("\n");
		}
	}
}

int main(void) {
	short mas[10] = { 4, 7, 3, 9, 0, 6, 4, 7, 1, 2 };
	short size = 10;

	printf("Unsorted massive: ");
	printMas(mas, size);

	insertSort(mas, size);

	printf("Sorted massive: ");
	printMas(mas, size);

	return 0;
}