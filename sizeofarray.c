#include <stdio.h>

int nilai[] = {20, 40, 90, 60, 70};

int main () {
    printf("Kita telah mengetahui tentang Array itu apa dan cara penggunaannya. Kali ini kita akan membahas mengenai cara untuk menghitung jumlah data yang Array gunakan.\n");
    printf("Selain digunakan untuk menghitung, kita juga dapat untuk membuat loop yang lebih optimal karena nanti Ia akan lebih dinamis.\n");
    printf("Seperti variabel biasa, kita gunakan \"sizeof\" untuk mencari tahu berapa bytes yang Ia gunakan. Langsung saja pada contoh dibawah ini.\n\n");

    printf("int nilai[] = {20, 40, 90, 60, 70};\n");
    printf("printf( \"%%zu\" , sizeof(nilai));\n");
    printf("Output: Jumlah bytes yang digunakan sebesar %zu\n" , sizeof(nilai));
    printf("Hasilnya sebesar %zu karena per satuannya Ia berjumlah sekitar %d bytes dikalikan dengan jumlah array sebanyak %d\n\n", sizeof(nilai), sizeof(nilai[0]), sizeof(nilai) / sizeof(nilai[0]));

    printf("Mari sekarang kita mencontohkan pada loop yang lebih optimal dalam array.\n");
    int panjang = sizeof(nilai) / sizeof(nilai[0]);
    int i;
    for (i = 0; i < panjang; i++)
    {
        printf("%d\n", nilai[i]);
    }
    
}