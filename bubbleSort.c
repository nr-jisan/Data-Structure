#include<stdio.h>
void bubble_sort(int a[], int n){
    for(int i = 0; i<n-1;i++){
        int flag= 0;
        for(int j = 0; j < n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
                flag=1;
            }                   
        }
        if(flag==0){
                break;
            }
    }
}
int main(){
    int x[]={12,3,15,4,2};
    int n = sizeof(x)/sizeof(x[0]);
    for(int i = 0; i<5; i++){
        printf("%d ",x[i]);
    }
    bubble_sort(x,n);
    printf("\n");
    for(int i = 0; i<5; i++){
        printf("%d ",x[i]);
    }
    return 0;
}