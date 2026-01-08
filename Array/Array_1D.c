#include <stdio.h>
int main(){
    // array 1 Dimensi
    int arr[5];

    // mengakses array
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 5;

    for(int i = 0;i <= 5;i++){
        printf("nilai array ke-%d adalah %d\n",i,arr[i]);
    }

    int arr_2 [3] = {12,32,40};
    for(int i = 0; i < 3; i++){
        printf("nilai dari i = %d\n",arr_2[i]);
    }


    return 0;
}