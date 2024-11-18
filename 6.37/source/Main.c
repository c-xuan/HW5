#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int arr[], int size);

int main() {

	int arr[5] = { 9,5,8,14,2 };
	int size = 5;
	int max = recursiveMaximum(arr, size);
	printf("Array is Max: %d\n", max);

	system("pause");
	return 0;
}

int recursiveMaximum(int arr[], int size) {
	int max = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}