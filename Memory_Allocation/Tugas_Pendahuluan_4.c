#include <stdio.h>
int main(){

    int n;
    printf("Masukan jumlah elemen Arrat -> "); scanf("%d",&n);
    int arr[n];
   for (int i = 0; i < n; i++)
   {
        printf("Masukan elemen ke-%d -> ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Alamat elemen ke-%d -> %p\n",i+1,&arr[i]);
    }
    
   

    return 0;
}