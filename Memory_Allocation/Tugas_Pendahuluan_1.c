#include <stdio.h>

int rekursi(int x){
    if (x == 0 || x == 1)
    {
        return 1;
    } else{
        return x * rekursi(x -1);
    }
    
}

int main(){
    int x;
    x = 5;
    int hasil = rekursi(x);
    printf("hasilnya adalah : %d\n",hasil);
    return 0;
}