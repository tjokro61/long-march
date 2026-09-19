#include<stdio.h>

int main(){
    int a, b, c;
    printf("masukkan angka pertama=");
    scanf("%d", &a);

    printf("masukkan angka kedua=");
    scanf("%d", &b);

    printf("masukkan angka ketiga=");
    scanf("%d", &c);

    if (a < b)
        if (a < c)
            printf("nilai terkecil adalah %d", a);
        else
            printf("nilai terkecil adalah %d", c);
    else if (b < c)
        printf("nilai terkecil adalah %d", b);
    else
        printf("nilai terkecil adalah %d", c);
    return 0;
}
