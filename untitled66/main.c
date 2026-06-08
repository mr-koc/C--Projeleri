#include <stdio.h>

void sayidanmorsacevir(int *girdiler) {

    FILE* mors;
    int okusun;

    mors = fopen("/Users/alikoc/Desktop/hatalar.dat.txt", "r");

    if (mors == NULL) {
        printf("Sistem HATA verdi.\n");
    } else {

        while ((okusun = getc(mors)) != EOF) {

            switch (okusun) {
                case '0':
                    printf("----- ");
                break;
                case '1':
                    printf(".---- ");
                break;
                case '2':
                    printf("..--- ");
                break;
                case '3':
                    printf("...-- ");
                break;
                case '4':
                    printf("....- ");
                break;
                case '5':
                    printf("..... ");
                break;
                case '6':
                    printf("-.... ");
                break;
                case '7':
                    printf("--... ");
                break;
                case '8':
                    printf("---.. ");
                break;
                case '9':
                    printf("----. ");
                break;

                case '\n':
                    printf("\n");
                    break;
                case ' ':
                    printf(" | ");
                    break;
            }
        }
        fclose(mors);
    }
}

int main(void) {

    sayidanmorsacevir("/Users/alikoc/Desktop/hatalar.dat.txt");
    return 0;
}