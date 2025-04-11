#include<stdio.h>
// {64, 25, 12, 22, 11}

void insertion_sort(int a[],int n){
    for(int i = 1; i<n;i++){
        int temp = a[i];//25
        int j = i-1;//0
        while(j >= 0 && a[j] > temp){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=temp;
    }

}
void printArray(int list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}


int main(){
    int list[] = {64, 25, 12, 22, 11};
    int n = sizeof(list) / sizeof(list[0]);

    printf("Original array: ");
    printArray(list, n);

    insertion_sort(list, n);

    printf("Sorted array: ");
    printArray(list, n);

}