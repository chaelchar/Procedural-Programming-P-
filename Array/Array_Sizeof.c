#include <stdio.h>
int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};   
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("panjang data array -> %d\n",n);

    printf("masukan nilai yang ingin dicari: ");
    scanf("%d",&key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] ==  key)
        {
            printf("nilai anda berada di indeks ke-arr[%d]\n",i);
        }
        
    }

    return 0;
}