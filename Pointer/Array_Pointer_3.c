#include <stdio.h>
int main(){

    int arr[3] = {10,20,30};
    printf("mengakses array dengan pointer\n");
    printf("nilai ke-1 -> %d\n", *(arr+0));
    printf("nilai ke-2 -> %d\n", *(arr+1));
    printf("nilai ke-3 -> %d\n", *(arr+2));

    printf("\n");
    // pakai for loop
    for(int i = 0;i < 3;i++){
        printf("arr[%d] = %d | *(arr + %d) = %d\n", i,arr[i],i,*(arr+i));
    }

    return 0;
}