#include<stdio.h>

int main(){
    int i;

    do
    {
        printf("masukkan angka tebakan anda=");
        scanf("%d", &i);

        if(i < 50){
            printf("tebakan anda terlalu kecil\n");}
        else if(i > 50){
            printf("tebakan anda terlalu besar\n");
        }
    }while(i != 50);

    if(i == 50)
        printf("tebakan anda benar!\n");

    return 0;
}
