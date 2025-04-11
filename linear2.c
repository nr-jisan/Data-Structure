#include <stdio.h>
int main(){
    int arr[]= {2,5,3,7,3,9,2,9,2,5,3,5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int key =3;
    int found = 0;

    for ( int i = 0; i < n-1; i++){
        if(arr[i]==key){
            printf("The key is %d and the Index number is %d\n",key,i);
            found = 1;

        }
    }
    if(found == 0){
        printf("Key not found");
    }
    return 0;
}