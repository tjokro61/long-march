#include<stdio.h>

int main() {
    int nilai;
    printf("masukkan nilai ujian anda=");
    scanf("%d", &nilai);

    if (nilai > 70)
        printf("anda lulus!");
    else
        printf("anda tidak lulus!");

    return 0;

}
