#include <stdio.h>
int main(){

char selamat[] = "selamat";
   char waktu[] = " pagi";
   strcat(selamat,waktu);
   printf("hasil penggabungan kedua string -> %s\n",selamat);

    // char A : selamat
    // char B : pagi
    // strcat(A,B) -> B dimasukan ke A
    // char A : selamat pagi
    // strcat(B,A) -> A dimasukan ke B
    // char B : pagi selamat

    return 0;
}