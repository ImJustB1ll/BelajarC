#include <stdio.h>

int telur = 11;

int main()
{
    printf("Kita telah mengetahui tentang cara mengeksekusi kode berdasarkan kondisi tertentu. Namun, sejauh ini bila kode tersebut telah sesuai dengan kondisinya maka Ia langsung di eksekusi lalu selesai. Semisal kita butuh untuk melakukan hal tersebut berulang kali, maka kita butuh yang namanya looping (spesifiknya conditional loop).\n");
    printf("Kita kali ini akan membahas mengenai do while loop, artinya adalah kita mengeksekusi kodenya DAHULU atau menjalankan perintahnya LALU melakukan pengecekan kondisi. Kalau kondisinya sudah salah dari awal maka pengulangannya tidak akan terjadi\n\n");

    printf("Ada berapa sih jumlah telur dalam rak telur kita? Mari kita hitung satau per satu!\n");

    do
    {
        printf("Menemukan butir telur ke-%d\n", telur);
        telur++;
    } while (telur <= 10);

    printf("\nTotal ada %d butir telur\n", telur - 1);
    printf("Kondisi diatas adalah KETIKA telur <= 10");
}