#include <stdio.h>

int main(){
    int n = 20;
    int total = 0;
    do
    {
        total += 2;
        n -= 1;
    } while (n != 0);
    printf("total -> %d\n",total);


    return 0;
}