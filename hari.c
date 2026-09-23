#include<stdio.h>

int main() {
    int hari;
    printf("masukkan angka(1-7)=");
    scanf("%d", &hari);

    if (hari == 1)
        printf("Minggu\n");
    else if (hari == 2)
        printf("senin\n");
    else if (hari == 3)
        printf("selasa\n");
    else if (hari == 4)
        printf("rabu\n");
    else if (hari == 5)
        printf("kamis\n");
    else if (hari == 6)
        printf("jumat\n");
    else if (hari == 7)
        printf("sabtu\n");
    else
        printf("input anda salah!\n");

    return 0;

}
