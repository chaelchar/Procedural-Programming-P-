#include <stdio.h>

int main(){
    int x;
    int max;
    int hitung = 0;
    printf("input nilai -> ");
    scanf("%d",&x);
    max = x;
    // cara berhentinya --> input 0
    while (1)
    {
        printf("input nilai -> ");
        scanf("%d",&x);
        if (x >= max)
        {
            max = x;
            hitung ++;
        } else {
            hitung++;
        }
        
        if (x == 0)
        {
            break;
        }       
    }
    printf("angka terbesar : %d\n",max);
    printf("jumlah angka : %d\n",hitung);

    return 0;
}