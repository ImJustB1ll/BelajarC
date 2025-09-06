#include <stdio.h>

int main () {
    printf("Array yang biasanya kita gunakan adalah single dimensional array, bisa dibilang array yang hanya satu deret saja.\n");
    printf("Namun masih ada lagi jenis array yang lainnya yang akan kita sebut sebagai multidimensional array. Jika single dimensional array hanya satu baris atau deret. Untuk multidimensional array ada dua jenis yakni two dimensional array dan three dimensional array.\n");
    printf("Bisa dibilang, dua hal tersebut mirip spreadsheet (excel) untuk menganalogikannya. Two dimensional array adalah satu tabel yang memiliki bagian \"row and column\" sementara itu three dimensional array adalah dua tabel dan memiliki row serta columnya masing masing.\n\n");

    printf("Contoh:");
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    printf("Kita memiliki two dimensional array seperti ini \"int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};\"\n");
    printf("Kita bisa melihat, ada kurung kurawal di dalam kurung kurawal. Hal tersebut merupakan bagian dari row nya. Untuk column, Ia merupakan value dari masing masing nilai yang diberikan pada kurung kurawal bagian dalam.\n");
    printf("Dari contoh diatas, kita dapat memanggilnya dengan cara \'printf(\"%%d\", matrix[0][2]);\'\n");
    printf("Kita memanggil kurung kurawal bagian dalam dengan index kedua yang berarti value yang kita panggil adalah: %d\n\n", matrix[0][2]);

    printf("Seperti array biasa, multidimensional array juga bisa melakukan re-assign pada array yang adanya. Seperti misal \"matrix[0][2] = 10;\" maka nilai dari column ketiga dari row pertama yang sebelumnya bernilai %d akan berubah menjadi:", matrix[0][2]);
    matrix[0][2] = 10;
    printf("%d\n\n", matrix[0][2]);

    printf("Kita juga dapat melakukan looping seperti array biasa. Contohnya seperti dibawah ini yang menggunakan for loop:\n");
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
        
    }
    
    printf("\nVersi yang lebih mirip dengan spreadsheat:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n Untuk three dimensional array. Karena sudah dijelaskan, Ia tidak banyak beda dengan two dimensional array. Jadi mari pembahasan cara membacanya dahulu seperti dibawah ini:\n");
    int threeDimensional[2][3][4] = {
        {
            {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}
        }
    };
    printf("int threeDimensional[2][3][4] = {\n {\n  {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}\n }, \n {\n  {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}\n }\n};\n");
    printf("\nUntuk jumlah array yang pertama yakni [2] merupakan jumlah tabel yang kita buat, dilanjutkan dengan [3] yakni jumlah row yang ada, terakhir ada [4] yakni jumlah column yang tersedia. Untuk loopingnya akan seperti ini:\n");
    int k;
    for (i = 0; i < 2; i++)
    {
        printf(" Tabel %d: \n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("  %d ", threeDimensional[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}