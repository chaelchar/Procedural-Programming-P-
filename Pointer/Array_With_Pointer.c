#include <stdio.h>
int main(){

    // hubungan array dan pointer
    int arr[3] = {1,2,3};
    printf("nilai arr[0] -> %d\n",arr[0]);
    printf("nilai arr[1] -> %d\n",arr[1]);
    printf("nilai arr[2] -> %d\n",arr[2]);

    // alamat tiap tiap array
    printf("alamat arr[0] -> %p\n",&arr[0]);
    printf("alamat arr[1] -> %p\n",&arr[1]);
    printf("alamat arr[2] -> %p\n",&arr[2]);

    return 0;
}