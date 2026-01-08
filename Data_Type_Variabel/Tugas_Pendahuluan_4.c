#include <stdio.h>
int main(){
    int a = 3;
    int b = 7;
    a = a + b;
    b = a - b;
    a = a - b;

    // a = 3 + 7 : 10
    // b = 10 - 7
    // b = 3
    // a = 10 - 3
    // b = 7

    printf("nilai a : %d\n",a);
    printf("nilai b : %d\n",b);



    return 0;
}