#include <stdio.h>

int x = 15;
int y = 19;

int time = 12;


int main()
{
    printf("C memberikan ruang untuk kita membandingkan suatu nilai yang biasa akan kita sebut sebagai kondisi. Dalam hal ini kita dapat memberikan kondisi ke dalam looping dari:\n 1. If, kode yang akan dijalankan jika kondisi benar (TRUE)\n 2. Else, kode yang dijalankan jika kondisi tidak ada yang benar (FALSE)\n 3. Else if, kode yang dijalankan jika kondisi sebelumnya itu tidak benar (FALSE)\n\n");

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("Apakah x > y?\n");
    if(x > y) {
        printf("x lebih besar dari y\n\n");
    } else {
        printf("x lebih kecil dari y\n\n");
    }

    printf("Contoh dalam menyapa berdasarkan waktu:\n");
    printf("Sekarang pukul: %d, maka kita perlu mengucapkan apa?\n", time);
    if (time < 12)
    {
        printf("Selamat pagi\n\n");
    } else if (time <= 15) {
        printf("Selamat siang\n\n");
    } else if (time <= 18) {
        printf ("Selamat sore\n\n");
    } else if (time <= 24) {
        printf("Selamat malam\n\n");
    } else {
        printf("Nyapa apaan lu\n\n");
    }

    printf("Ternary operator\nTernary operator merupakan sebuah istilah untuk kode if yang singkat.\nKalau biasanya kita bikin if itu menggunakan \"{}\" yang di dalamnya bisa panjang, untuk penulisan kode ternary operator hanya seperti ini:\n\n");
    printf("\"variable = (condition) ? expressionTrue : expressionFalse;\"\n\nTerlihat lebih singkat bukan? Secara fungsi sih masih sama ya, untuk menentukan hasil berdasarkan kondisi.\n");
    printf("Variable, sesuai namanya Ia merupakan variable seperti biasa. Yang bikin beda disini, kita tidak mendeklarasikan valuenya saja namun langsung mendeklarasikan if juga\n");
    printf("(condition) merupakan kondisi yang kita inginkan atau hindari\n");
    printf("\"?\" adalah if nya, dilanjutkan dengan \"expressionTrue\" yang merupakan eksekusi kode jika kondisi sesuai\n");
    printf("\":\" adalah else nya, dilanjutkan dengan \"expressionFalse\" yang merupakan eksekusi kode jika kondisi tidak sesuai\n\n");

    printf("Sekarang pukul %d, hai kawan!\n", time);
    int jam = (time <=15) ? printf("Selamat siang\n") : printf("Halo\n");
}