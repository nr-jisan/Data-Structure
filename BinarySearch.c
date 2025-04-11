#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int binaryS[n];
    printf("Enter the sorted elements please: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &binaryS[i]);
    }
    
    printf("Enter the search key: ");
    scanf("%d", &key);
    
    int low = 0;
    int high = n - 1;
    int mid;
    int index = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (binaryS[mid] == key) {
            index = mid;
            break;
        } else if (binaryS[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (index == -1) {
        printf("Element not found.\n");
        return 0;
    }
    
    int left = index;
    while (left >= 0 && binaryS[left] == key) {
        left--;
    }
    
    int right = index;
    while (right < n && binaryS[right] == key) {
        right++;
    }
    
    for (int i = left + 1; i < right; i++) {
        printf("Element found at index: %d  Value: %d\n", i, binaryS[i]);
    }
    
    return 0;
}
/*
Md. Naimur Rahman Jisan
UG02-63-23-030
Batch 63rd
Computer Science & Engineering
State University of Bangladesh
*/