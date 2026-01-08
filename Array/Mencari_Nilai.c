#include <stdio.h>
int main(){
    int key;
    printf("input nilai key yang ingin dicari ->");
    scanf("%d",&key);
    int arr[5] = {5,6,7,4,8};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            printf("ditemukan di indeks ke -> %d\n",i);
        }
        
    }



    return 0;
}