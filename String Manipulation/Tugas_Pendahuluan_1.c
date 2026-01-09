#include <stdio.h>
int main(){

    char string[] = "Metalurgi";
    int count = 0;
    for (int i = 0; i < (sizeof(string)/sizeof(string[0])) ; i++)
    {
        count++;
    }
    printf("panjang string : %d",count-1);

    return 0;
}