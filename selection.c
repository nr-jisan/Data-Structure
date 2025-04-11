#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int list[], int n) {
    int i, j, min, temp;
    //{30,10,50,20}
    for (i = 0; i < n - 1; i++) {
        
        min = i;
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the current element
        if (min != i) {
            temp = list[min];
            list[min] = list[i];
            list[i] = temp;
        }
    }
}

// Function to print the array
void printArray(int list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list[] = {64, 25, 12, 22, 11};
    int n = sizeof(list) / sizeof(list[0]);

    printf("Original array: ");
    printArray(list, n);

    selectionSort(list, n);

    printf("Sorted array: ");
    printArray(list, n);

    return 0;
}
