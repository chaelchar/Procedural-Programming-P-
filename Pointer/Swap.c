#include <stdio.h>
int main(){

    int a = 10;
    int *q;

    q = &a;

    int b = 5;
    int *p;
    p = &b;
 
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("nilai dari a:%d\n ",a);
    printf("nilai dari b:%d\n ",b);


    return 0;
}