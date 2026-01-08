#include <stdio.h>

int main(){
    int r;
    // input jari jari nya
    printf("input jari jari lingkaran : ");
    scanf("%d",&r);
    
    float phi   = 3.14;
    
    // mencari luas dan keliling
    double luas = phi * (r * r); 
    double keliling = 2 * (phi * r);

    // print outputnya
    printf("hasil kali luas     : %lf\n",luas);
    printf("hasil kali keliling : %lf\n",keliling);


    return 0;
}