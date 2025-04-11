#include <stdio.h>

int main() {
    int n, key, i, found = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int Searching[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &Searching[i]);
    }
    
    printf("Enter the search key: ");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++) {
        if (Searching[i] == key) {
            printf("Element found at index: %d  Value: %d\n", i, Searching[i]);
            found = 1;
        }
    }
    
    if (found==0) {
        printf("Element not Found\n");
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
