#include <stdio.h>

int x, y;

int main()
{
    printf("Kita bisa melakukan loop dalam loop yang disebut sebagai nested loops. Kita akan gunakan for loop dengan istilah. For loop luar dan for loop dalam. For loop dalam adalah kode for loop yang diletakkan di dalam for loop, sementara itu for loop luar adalah kode loop yang dijadikan sebagai parent dari kode for loop dalam.\n");
    printf("For loop dalam akan dieksekusi setiap iterasi atau kode for loop luar dieksekusi.\n\n");

    for (x = 1; x <= 2; x++)
    {
        printf("Luar: %d\n", x); // Dijalankan dua kali
        for (y = 1; y <= 3; y++)
        {
            printf(" Dalam: %d\n", y); // Dijalankan 6 kali (2 * 3)
        }
    }

    printf("\n Diatas merupakan contoh untuk bagaimana si nested loop bekerja. Sesuai yang dikatakan, bahwa Ia akan menyelesaikan loop bagian dalam terlebih dahulu sebelum keluar menjalankan loop luar kembali.\n");
    printf("Kita akan gunakan contoh disini, seperti tabel. Karena kita akan mengeksekusi kode loop dalam terlebih dahulu, maka kita dapat memberikan seolah olah new line setelah loop dalamnya selesai dan hal tersebut akan membentuk seperti tabel bahkan bentuk bentuk lainnya.\n\n");

    for (x = 1; x <= 3; x++) {
        for (y = 1; y <= 3; y++) {
            printf("%d ", x * y);
        }
        printf("\n");
    }
}