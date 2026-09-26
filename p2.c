#include<stdio.h>

int main() {
    int i, opt=1, sum=0;
    char pilih = 'y';

    while(pilih != 't' && pilih != 'T')
    {
        printf("masukkan bilangan ke-%d :", opt);
        scanf("%d", &i);

        sum=sum+i;
        opt++;
        printf("mau memasukkan bilangan lagi[y/t]?");
        scanf(" %c", &pilih);
    }
    printf("total semua bilangan adalah %d\n", sum);

    return 0;
}
