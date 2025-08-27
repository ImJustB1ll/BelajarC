#include <stdio.h>

int datatypes () {
    int nomor = 5;
    float desimal = 10.5;
    double desimalLebihBanyak = 20.55;
    char nickname = 'B';

    printf("Format specifier untuk integer adalah \"%%d atau %%i\" lalu dilanjut koma dan tulis nama variabelnya setelah kutip string\n");
    printf("Format specifier untuk float adalah \"%%f atau %%F\" lalu dilanjut koma dan tulis nama variabelnya setelah kutip string\n");
    printf("Format specifier untuk double adalah \"%%lf\" lalu dilanjut koma dan tulis nama variabelnya setelah kutip string\n");
    printf("Format specifier untuk char adalah \"%%c\" lalu dilanjut koma dan tulis nama variabelnya setelah kutip string\n");
}

int main () {
    datatypes();
}