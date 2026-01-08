#include <stdio.h>
int main(){

   // akses array 2D versi pointer murni
    int matriks[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("%d\n", *(*(matriks + 0) + 1));
    printf("%d\n", *(*(matriks + 1) + 1));

    return 0;
}