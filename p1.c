#include<stdio.h>

int main()
{
    int i, t, sum=0;

    printf("masukkan integer positif=");
    scanf("%d", &t);

    for(i=1; i <= t; i++)
    {
        sum=sum+i;
    }
    printf("Jumlah 1 sampai %d = %d\n\n", t, sum);

    return 0;
}
