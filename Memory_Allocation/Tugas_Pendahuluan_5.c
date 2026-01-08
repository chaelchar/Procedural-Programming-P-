#include <stdio.h>
int main(){
    int n;
    printf("input nilai n -> ");scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("input elemen ke-%d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("nilai awal array ke-%d -> %d\n",i+1,arr[i]);
    }
    
    printf("\n");

    int *pa;
    
    for (int i = 0; i < n; i++)
    {
        pa = &arr[i];
        printf("ubah nilai array ke-%d ->",i+1);
        scanf("%d",&*pa);
        *pa = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("nilai perubahan array ke-%d -> %d\n",i+1,arr[i]);
    }
    
    return 0;
}       