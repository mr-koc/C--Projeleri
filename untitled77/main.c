#include <stdio.h>

int main(void) {

    char satir[30];
    FILE *f = fopen("/Users/alikoc/Desktop/veri.dat.txt", "r");


    if (f == NULL) {
        printf("DOSYAYA ULAŞILAMIYOR!\n");
    } else {
        while (fgets(satir, 30, f)!=NULL) {
        printf("%s", satir);
    }
        fclose(f);
    }
    return 0;
}