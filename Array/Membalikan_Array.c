#include <stdio.h>
int main(){
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    
    for (int i = 0; i < 10 /2; i++)
    {

        int temp = arr[i];
        arr[i] = arr[10 -1- i];
        arr[10-1-i] =temp;

    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("nilai array: %d\n",arr[i]);
    }


    return 0;
}