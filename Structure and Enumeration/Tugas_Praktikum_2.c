#include <stdio.h>

struct Produk
{
    char Nama_Produk[30];
    int harga_produk;
};

struct Pelanggan
{
    char Nama_Pelanggan[30];
    char Nomor_Telepon[30];
    struct Produk pr;
};

struct Jumlah_Pembelian
{
    int jumlah_pembelian;
    struct Pelanggan pl;
};

int main(){
    struct Jumlah_Pembelian jp;
    printf("Masukan Nama Produk: ");
    scanf(" %[^\n]", &jp.pl.pr.Nama_Produk);
    
    printf("Masukan harga Produk: ");
    scanf("%d", &jp.pl.pr.harga_produk);
    
    printf("Masukan Nama Pelanggan: ");
    scanf(" %[^\n]", &jp.pl.Nama_Pelanggan);
    
    printf("Masukan Nomor Telepon: ");
    scanf(" %[^\n]", &jp.pl.Nomor_Telepon);

    printf("Masukan Jumlah Pembelian: ");
    scanf("%d",&jp.jumlah_pembelian);

    printf("\n===Detail Transaksi===\n");
    printf("Produk           -> %s\n",jp.pl.pr.Nama_Produk);
    printf("Harga per unit   -> %d\n",jp.pl.pr.harga_produk);
    printf("Nama Pelanggan   -> %s\n",jp.pl.Nama_Pelanggan);
    printf("Nomor Telepon    -> %s\n",jp.pl.Nomor_Telepon);
    printf("Jumlah Pembelian -> %d\n",jp.jumlah_pembelian);
    printf("Total Harga      -> %d\n",jp.jumlah_pembelian * jp.pl.pr.harga_produk);
    
    return 0;
}