#include <stdio.h>
int main(){

    int arr[10] = {6,8,4,5,12,3,10,2,7,8};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)    
    {
            max = arr[i];
        }
        
        if (arr[i] < min)
    {
            min = arr[i];
    }   
    }
    printf("nilai array yang max -> %d\n",max);
    printf("nilai array yang min -> %d\n",min);
    
    return 0;
}