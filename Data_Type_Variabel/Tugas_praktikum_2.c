#include <stdio.h>
 int main() {
 int usia;
 float tinggi;
 char huruf;
 // Input dari pengguna
 printf("Masukkan usia Anda: ");
 scanf("%d", &usia);
 printf("Masukkan tinggi badan Anda: ");
 scanf("%f", &tinggi);
 printf("Masukkan inisial nama Anda: ");
 scanf(" %c", &huruf);
 // Menampilkan nilai yang dimasukkan
 printf("Usia: %d\n", usia);
 printf("Tinggi: %.2f\n", tinggi);
 printf("Inisial: %c\n", huruf);
 
 //  tugas 
 char nama_lengkap[50];
 printf("Masukan Nama Lengkap Anda: ");
 scanf("%s",&nama_lengkap);
 printf("Nama Lengkap Anda [%s]\n",nama_lengkap);
 
 return 0;
}