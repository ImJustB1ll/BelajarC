#include <stdio.h>

int x = 10;
int y = 5;

int main () {
    int sum = x + y;
    int subtract = x - y;
    int multiplication = x * y;
    int division = x / y;
    int modulus = x % y;

    printf("Variabel x: %d\nVariabel y: %d\n\n", x, y);
    printf("Dalam C, kita bisa menggunakan beberapa rumus basic dalam matematika:\n");
    printf("Seperti halnya penjumlahan, kita akan menggunakan \"+\" saat memberikan value pada variabelnya (valuenya dapat berupa variabel lain) seperti contohnya \"x + y: %d\"\n", sum);
    printf("Untuk pengurangan kita bisa pakai \"-\" saat memberi valuenya, seperti contohnya \"x - y: %d\"\n", subtract);
    printf("Untuk perkalian kita bisa pakai \"*\" saat memberi valuenya, seperti contohnya \"x * y: %d\"\n", multiplication);
    printf("Untuk pembagian kita bisa pakai \"/\" saat memberi valuenya, seperti contohnya \"x / y: %d\"\n", division);
    printf("Untuk modulus atau bilangan sisa hasil pembagian, kita bisa pakai \"%%\" saat memberi valuenya, seperti contohnya \"x %% y: %d\"\n", modulus);
}