#include <stdio.h>

int x;

int main () {
    printf("Jika sebelumnya kita telah melihat penggunaan break dalam switch case. Yang dimana hal tersebut kita gunakan sebagai \"exit\" dari loop, nah kita juga bisa gunakan untuk loop yang lain. Bukan hanya break saja namun continue juga.\n\n");

    printf("Contoh dibawah ini adalah kita melakukan break ketika variabel kita menyentuh bilangan 4. Jika variabel kita adalah 4 maka Ia akan keluar dari loop.\n");
    for (x = 0;  x <= 10; x++) {
        if (x == 4) {
            break;
        }
        printf("%d\n", x);
    }

    printf("\nKebalikannya, contoh dibawah ini adalah kita melakukan continue ketika variabel kita menyentuh bilangan 4. Jika variabel kita adalah 4 maka Ia akan melakukan skip angka tersebut dan melanjutkan loop sampai selesai.\n");
    for (x = 0; x <= 10; x++)
    {
        if (x == 4)
        {
            continue;;
        }
        printf("%d\n", x);
    }

    printf("\nKita juga dapat menggunakan fitur serupa dalam while loop, tidak hanya terbatas pada for loop.\n");

    x = 0;
    printf("Break:\n");
    while (x < 10)
    {
        if (x == 4)
        {
            break;
        }
        printf("%d\n", x);
        x++;
    }

    x = 0;
    printf("\nContinue:\n");
    while (x < 10) {
        if (x == 4)
        {
            x++;
            continue;
        }
        printf("%d\n", x);
        x++;
    }
    return 0;
}