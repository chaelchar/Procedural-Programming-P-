#include <stdio.h>
 int main() {
 int usia;
 float tinggi;
 char huruf;
 
 // Input data dari pengguna
 printf("Masukkan usia: ");
 scanf("%d", &usia);
 printf("Masukkan tinggi badan: ");
 scanf("%f", &tinggi);
 printf("Masukkan inisial nama: ");
 scanf(" %c", &huruf); // Spasi sebelum %c untuk membersihkan input sebelumnya

 // Output hasil input
 printf("Usia: %d\n", usia);
 printf("Tinggi: %.2f\n", tinggi);
 printf("Inisial nama: %c\n", huruf);
 return 0;
}
