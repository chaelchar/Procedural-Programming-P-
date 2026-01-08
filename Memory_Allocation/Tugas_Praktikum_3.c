#include <stdio.h>
int main(){
    int m,n;
    int total = 0;
    printf("input jumlah baris -> "); scanf("%d",&m);
    printf("input jumlah kolom -> "); scanf("%d",&n);
    int matriks[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("input nilai matriks ke-[%d][%d] -> ",i,j);
            scanf("%d",&matriks[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("nilai matriks ke-[%d][%d] -> %d\n",i,j,matriks[i][j]);
            total += matriks[i][j];
        }
    }
    printf("total matriks -> %d\n",total);
    return 0;
}