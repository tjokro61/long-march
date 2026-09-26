#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int r = rand() % 100;
    int i;

    do
    {
        printf("masukkan angka tebakan anda=");
        scanf("%d", &i);

        if(i < r){
            printf("tebakan anda terlalu kecil\n");}
        else if(i > r){
            printf("tebakan anda terlalu besar\n");
        }
    }while(i != r);

    if(i == r)
        printf("anda benar!");
    return 0;

}
