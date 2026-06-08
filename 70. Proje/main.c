#include <stdio.h>

int main(void) {

    int karsay=0;
    int kelsay=0;
    int okunan;

    FILE *f = fopen("/Users/alikoc/Desktop/veri.dat.txt", "r");

    if (f==NULL) {
        printf("File not found\n");
    } else {
        while ((okunan = fgetc(f))!=EOF) {
            karsay++;

            if (okunan == ' ' || karsay == '\n' || karsay == '\t' || karsay == '\r') {
                kelsay++;
            }
        }
        fclose(f);
    }

    printf("Karakter Sayısı: %d\n", karsay);
    printf("Kelime Sayısı: %d\n", kelsay);
    return 0;
}