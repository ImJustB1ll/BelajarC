#include <stdio.h>

int main () {
    printf("Jika mendeklarasikan variabel kita biasanya melakukannya satu per satu. Kita bisa semacam mengelompokkan mereka ke dalam satu bagian besar. Praktek seperti ini umum karena data itu dinamis dan bisa ditambah maupun dikurang, bukan hanya di \"re-assign\" saja.\n");
    printf("Pembuatannya seperti variabel biasa, namun kita menggunakan \"[]\" setelah nama variabel lalu untuk isinya kita perlu menggunakan \"{}\" dan mengisi valuenya di dalam kurung kurawalnya\n");

    int nilai[] = {20, 40, 50, 80, 90};

    printf("Aku baru saja deklarasi array seperti ini \"int nilai[] = {20, 40, 50, 80, 90};\"\n");
    printf("Kita dapat mengakses atau memanggil elemen dalam array dengan cara\"printf( %%d , namaArray[0]);\"\n");
    printf("kita perlu memberikan \"[diisi angka index yang diinginkan]\" karena setiap elemen yang di dalam ditandai dengan index yang dimulai dari 0 dan secara umum dari kiri ke kanan\n\n");
    printf("Contoh:\n Nilai MTK Budi adalah %d\n\n", nilai[4]);

    printf("Seperti variabel biasa, kita juga bisa mengubah nilai dari elemen yang ada pada array, untuk melakukannya kita perlu spesifik menyebut index ke berapa dari variabel tersebut, seoerti \"namaVariabel[0] = 23\"\n\n");
    printf("Kalau nilai index pertama atau 0 sebelumnya adalah %d\n", nilai[0]);
    nilai[0] = 23;
    printf("Maka setelah kita re-assign, nilai yang baru adalah %d\n\n\n", nilai[0]);

    printf("Kita juga bisa menggunakan for loop yang seperti pengulangan penjumlahan untuk menentukan index mana yang akan kita inginkan\n");
    printf("Seperti dibawah ini, memanggil semua elemen dalam array menggunakan for loop untuk kode yang bisa di \"scaling\" lebih besar\n\n");

    int i;

    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", nilai[i]);
    }
    
    printf("\n\nNah tadi kita telah mengetahui tentang loop yang bisa digunakan untuk memanggil index pada array. Selain deklarasi langsung, array juga dapat dibuat terlebih dahulu strukturnya lalu diisi valuenya lain waktu. Seperti contoh:\n\n");
    printf("\"int namaVariabelmu[4];\" -> Kode disamping artinya kita telah mendeklarasikan kalau ada array kosong yang dapat diisi nantinya dengan batasan maksimal indexnya 4 (5 value). Walau pada nantinya bisa melebihi batas, namun lebih baik menyesuaikan batas supaya memperingan pekerjaan proses memori yang berjalan.");

}