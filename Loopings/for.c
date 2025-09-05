#include <stdio.h>

int x;

int main()
{
    printf("Kita telah mengetahui tentang cara mengeksekusi kode berdasarkan kondisi tertentu. Namun, sejauh ini bila kode tersebut telah sesuai dengan kondisinya maka Ia langsung di eksekusi lalu selesai. Semisal kita butuh untuk melakukan hal tersebut berulang kali, maka kita butuh yang namanya looping (spesifiknya conditional loop).\n");
    printf("Kita kali ini akan membahas mengenai for loop, yang artinya SELAMA kondisi sesuai maka kodenya akan berulang dijalankan. Biasanya penggunaan for loop cukup spesifik disaat developer tau harus menjalankan kodenya berapa kali sampai keluar dari loop\n");
    printf("Yang membuatnya beda juga adalah, Ia langsung menggunakan 3 expression (pengecekan kondisi) sekaligus, semetara looping yang lain secara umum adalah 1 atau 2\n\n");

    printf("Disini sudah dideklarasikan variabel integer yang bernama x tanpa sebuah value, karena valuenya akan kita assign nanti di dalam ekspresi kondisi.\n");
    printf("Kita akan mencari bilangan genap dari range 0 sampai 10. Kondisi yang kita tentukan adalah x = 0 (kita menentukan x adalah 0) dilanjutkan dengan x <= 10 (SELAMA x kurang dari sama dengan 10) lalu terakhir x += 2 (x menambah dirinya sendiri dengan bilangan 2)\n\n");

    for (x = 0; x <= 10; x += 2)
    {
        printf("%d\n", x);
    }

    printf("\nNah setelah kita lihat hasilnya, maka dapat kita katakan bahwa ekspresi kondisi pertama adalah penentuan value dari variabel, untuk yang kedua adalah kondisi batas yang kita inginkan, terakhir yang ketiga adlah operasi yang kita lakukan. Di dalam for baru kita print hasilnya.\n");
}