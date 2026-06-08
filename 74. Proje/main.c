#include <stdio.h>

int main(void) {

    long long ogrencino[50];
    int not[50];
    int i=0, j, k;
    int encoktek = 0;
    int maxtekrar = 0;
    int anliktekrar;

    FILE *f = fopen("/Users/alikoc/Desktop/ogrenci.dat.txt", "r");

    if (f == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    while (i<50 && fscanf(f, "%lld %d", &ogrencino[i], &not[i]) != EOF) {
        i++;
    }
    fclose(f);

    for (j=0; j<i; j++) {

        anliktekrar = 0;

        for (k=0; k<i; k++) {
            if (not[j] == not[k]) {
                anliktekrar++;
            }
        }

        if (anliktekrar > maxtekrar) {
            maxtekrar = anliktekrar;
            encoktek = not[j];
        }
    }

    printf("\n-----SONUCLAR-----\n");
    printf("YIGILMANIN OLDUGU NOT: %d (%d adet)\n", encoktek, maxtekrar);
    printf("BU NOTU ALANLAR:\n");
    printf("------------------\n");

    for (j=0; j<i; j++) {
        if (not[j] == encoktek) {
            printf("OGRENCI NO: %lld  NOT: %d\n", ogrencino[j], not[j]);
        }
    }

    return 0;
}