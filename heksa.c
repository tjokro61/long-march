#include<stdio.h>

int main(){
    char opt;
        printf("masukkan huruf(a-e)=");
        scanf("%c", &opt);

    switch (opt) {
        case 'a': {
            printf("Nilai angka 4\n");
            break;}
        case 'b':{
            printf("Nilai angka 3\n");
            break;}
        case 'c':{
            printf("Nilai angka 2\n");
            break;}
        case 'd':{
            printf("Nilai angka 1\n");
            break;}
        case 'e':{
            printf("Nilai angka 0\n");
            break;}
        default:
            printf("INPUT TIDAK VALID!");
    }

    return 0;
}
