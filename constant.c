#include <stdio.h>

const int birthyear = 80;

int main () {
    // nilai = 90;

    printf("Variabel yang memiliki constant atau const itu tidak bisa dirubah datanya dengan metode biasa, seperti halnya kita memiliki variabel dengan nama birthyear dan valuenya %d\n", birthyear);
    printf("Nilai dari variabel birthyear tidak bisa di assign ulang dan akan tetap menjadi: %d, malah programnya akan error dan menolak jalan jika di assign secara langsgung\n", birthyear);
    return 0;
}