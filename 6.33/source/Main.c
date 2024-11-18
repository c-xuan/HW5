#include <stdio.h>
#include <stdlib.h>

int binarySearch(const int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
        
    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid;
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    }
    else {
        return binarySearch(arr, mid + 1, high, key);
    }
}

int main() {
    int results[13] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    int key;

    printf("Enter the value to search: ");
    scanf("%d", &key);

    int index = binarySearch(results, 2, 12, key);
    if (index != -1) {
        printf("Sum %d found at index %d.\n", key, index);
    }
    else {
        printf("Sum %d not found.\n", key);
    }

    return 0;
}
