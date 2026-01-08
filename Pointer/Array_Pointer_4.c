#include <stdio.h>
int main(){

    // pointer menunjuk ke array
    int arr[3] = {1,2,3};
    int *p = arr;

    printf("Mengakses array lewat pointer\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",*(arr + i));
    }

    return 0;
}