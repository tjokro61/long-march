#include<stdio.h>

int main(){

    int opt;
        printf("1. rumus luas segitiga\n2. rumus luas persegi\n3. rumus luas jajar genjang\n");
        printf("masukkan pilihan anda=");
        scanf("%d", &opt);

    float a, b, c;
        //rumus segitiga
        if (opt == 1){
            printf("masukkan nilai alas=");
            scanf("%f", &a);
            printf("masukkan nilai tinggi=");
            scanf("%f", &b);
            c= a * b * 0.5;
            printf("Ini hasilnya %.2f", c);
        }


        //rumus bujur sangkar
        else if (opt == 2){
            printf("masukkan nilai sisi 1=");
            scanf("%f", &a);
            printf("masukkan nilai sisi 2=");
            scanf("%f", &b);
            c=a*b;
            printf("ini hasilnya=%.2f", c);
        }

        //rumus persegi panjang
        else if (opt == 3){
            printf("masukkan nilai panjang=");
            scanf("%f", &a);
            printf("masukkan nilai lebar=");
            scanf("%f", &b);
            c=a*b;
            printf("ini hasilnya=%.2f", c);
        }

        //jika input salah
        else {
            printf("INPUT ANDA SALAH!");}

    return 0;
}
