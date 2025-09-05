#include <stdio.h>

int day = 6;

int main() {
    printf("Untuk mengecek kondisi, daripada kita menulis if else dengan cabang yang banyak. Ada baiknya bila kita gunakan switch case.\n");
    printf("Switch case adalah metode pengecekan kondisi berdasarkan jumlah case yang ada, Ia akan membandingkan antara expression (kondisi) yang ditentkukan dengan jumlah case yang ada. Bila tidak ada yang sesuai maka Ia akan memberikan default value.\n");
    printf("Kode ini terus berjalan oleh sebab itu kita perlu untuk melakukan break untuk menghentikan eksekusi kodenya atau lanjut ke kode lain jika ada.\n\n");

    printf("Hari ini adalah hari ke-%d di minggu ini. Setiap minggu dimulai dari hari Senin, maka hari ini adalah hari\n", day);

    switch (day)
    {
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    default:
        printf("Weekends");
        break;
    }   
}