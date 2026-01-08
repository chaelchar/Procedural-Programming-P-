#include <stdio.h>
int main() {
 int a, b;
 int sum, difference, product, quotient, modulus;
 // Input dua angka dari pengguna
 printf("Masukkan dua angka: ");
 scanf("%d %d", &a, &b);
 // Operasi aritmatika
 sum = a + b;
 difference = a - b;
 product = a * b;
 quotient = a / b;
 modulus = a % b;
 // Menampilkan hasil operasi
 printf("Penjumlahan: %d + %d = %d\n", a, b, sum);
 printf("Pengurangan: %d - %d = %d\n", a, b, difference);
 printf("Perkalian: %d * %d = %d\n", a, b, product);
 printf("Pembagian: %d / %d = %d\n", a, b, quotient);
 printf("Modulus: %d %% %d = %d\n", a, b, modulus);
 
 //  Tugas
 int angka_1,angka_2,angka_3;
 printf("input angka :");scanf("%d %d %d",&angka_1,&angka_2,&angka_3);
 float rata_rata = (angka_1 + angka_2 + angka_3/3);
 printf("hasil rata rata : %f\n",rata_rata);
 return 0;
}