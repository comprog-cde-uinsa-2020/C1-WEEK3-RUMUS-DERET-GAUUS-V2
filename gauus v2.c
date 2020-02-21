#include <stdio.h>
int main (){
    printf("---RUMUS DERET GAUUS versi 2---\n");
    printf("dibuat Mahasiswa PROKOM C Kelompok 1\n");
    printf("\n");
    int Bilangannya; //variabelnya dikasih nama bebas
    printf("masukan anyak angka yang diinginkan: ");
    scanf("%i", &Bilangannya);
    if (Bilangannya %2 == 1) //branching itu percabangan 2 pilihan nah disini tak buat 2 model ganjil/genap
        printf("hasil deret gauus ganjil adalah: %i", (Bilangannya+1)/2*Bilangannya);
    else
        printf("hasil deret gauus genap adalah: %i", (Bilangannya/2)*(Bilangannya+1));
}
