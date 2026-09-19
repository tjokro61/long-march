#include<stdio.h>

int main() {
    char opt;
        printf("masukkan nilai huruf(a-e)=");
        scanf("%c", &opt);

    if (opt == 'a')
        printf("Nilai huruf adalah 4\n");
    else if (opt == 'b')
        printf("Nilai huruf adalah 3\n");
    else if (opt == 'c')
        printf("Nilai huruf adalah 2\n");
    else if (opt == 'd')
        printf("Nilai huruf adalah 1\n");
    else if (opt == 'e')
        printf("Nilai huruf adalah 0\n");
    else
        printf("INPUT TIDAK VALID");

    return 0;
}
