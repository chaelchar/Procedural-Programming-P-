#include <stdio.h>
#include <string.h>

enum StatusKelulusan{
    LULUS,
    MENGULANG,
    TIDAK_LULUS
};

struct Mahasiswa{
    char Nama[50];
    char Nim[15];
    int nilai;
    enum StatusKelulusan status;
};

int main(){
    struct Mahasiswa mhs;
    printf("Masukan Nama Mahasiswa: ");
    fgets(mhs.Nama, sizeof(mhs.Nama),stdin);

    printf("Mmasukan Nim Mahasiswa: ");
    fgets(mhs.Nim, sizeof(mhs.Nim),stdin);

    printf("Masukan Nilai: ");
    scanf("%d",&mhs.nilai);

    // menghapus newline dari fgets
    mhs.Nama[strcspn(mhs.Nama, "\n")] = '\0';
    mhs.Nim [strcspn(mhs.Nim, "\n")]   = '\0';

    if(mhs.nilai >= 75) {
        mhs.status = LULUS;
    } else if(mhs.nilai >= 50){
        mhs.status = MENGULANG;
    }else{
        mhs.status = TIDAK_LULUS;
    }

    // Output data mahasiswa
    printf("\n=== DATA MAHASISWA ===\n");
    printf("Nama  : %s\n", mhs.Nama);
    printf("Nim   : %s\n", mhs.Nim);
    printf("Nilai : %d\n", mhs.nilai);

    printf("Status: ");
    if (mhs.status ==  LULUS)
    {
        printf("LULUS\n");
    } else if(mhs.status == MENGULANG){
        printf("MENGULANG\n");
    }else{
        printf("TIDAK LULUS\n");
    }
    
    

    return 0;
}