#include <stdio.h>
int main(){
     // array 2 Dimensi (matriks)
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    /*
    disebut:
    2 baris 3 kolom
    dia bakal seperti
    [0][0] [0][1] [0][2]
    [1][0] [1][2] [1][2]
    */

    // inisialisasi array 2D
    printf("nilai elemen baris ke 2 kolom ke 2 -> %d\n",arr[1][1]);

    printf("\n");
    // input matriks
    int baris;
    int kolom;
    printf("input baris : ");scanf("%d",&baris);
    printf("input kolom : ");scanf("%d",&kolom);
    int matriks[baris][kolom];
    for(int i = 0;i < baris;i++){
        for(int j = 0;j<kolom;j++){
            printf("input matriks ke-[%d][%d] -> ",i,j);
            scanf("%d",&matriks[i][j]);
        }
    }
    // output
    for(int i = 0;i < baris; i++){
        for(int j = 0;j<kolom;j++){
            printf("matriks[%d][%d] -> %d\n",i,j,matriks[i][j]);
        }
    }


    return 0;
}