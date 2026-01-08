#include <stdio.h>
int main(){

    // mengubah isi array menggunakan pointer
    int arr[3] = {10,20,30};
    int *p = arr;
    *(p +0) = 100;
    *(p +1) = 200;
    *(p +2) = 300;
    
    printf("isi array setelah diubah\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}