#include <stdio.h>
int main(){

    // arr = &arr[0]
    // arr    -> alamat pertama pada array
    // &arr[0] -> juga alamat pertama pada array

    int arr[3] = {1,2,3};   
    printf("arr    : %d\n",arr);
    printf("arr[0] : %d\n",&arr[0]);

    return 0;
}