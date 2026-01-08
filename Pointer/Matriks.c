#include <stdio.h>
int main(){

    int matriks[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int (*p)[3] = matriks;

    printf("Akses matriks lewat pointer\n");
    printf("%d\n",p[0][0]);
    printf("%d\n",p[1][2]);

    return 0;
}