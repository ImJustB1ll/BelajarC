#include <stdio.h>
#include <stdbool.h>

bool isItWorthIt = true;
bool isSheAnnoying = false;

bool isRendangTasty = true;
bool isSatayTasty = true;

bool myAge = 17;
bool syaratPunyaKTP = 17;

int main() {
    printf("Apakah belajar C worth it?\n%d\n", isItWorthIt);
    printf("Apakah yappingan dia ngeselin?\n%d\n\n", isSheAnnoying);

    printf("Apakah 10 lebih besar dari 9?\n%d\n\n", 10>9);

    printf("Apakah Rendang dan Sate sama sama enak?\n%d\n\n", isRendangTasty == isSatayTasty);

    printf("Apakah umur saya sudah mencukupi untuk membuat KTP?\n%d\n", myAge == syaratPunyaKTP);
    return 0;
}
