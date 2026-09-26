#include<stdio.h>

int main() {
    char pilih;

    do
    {
        printf("anda sudah sholat?(s/b)");
        scanf(" %c", &pilih);
    } while(pilih != 's' && pilih != 'b' && pilih != 'Y' && pilih != 'T');

    switch(pilih) {
        case 's':
        case 'S':
            printf("kerja bagus");
            break;
        case 'b':
        case 'B':
            printf("umur gak ada yang tau bang");
            break;
    }

    return 0;
}
