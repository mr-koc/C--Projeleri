#include <stdio.h>

int main(void) {

    char yeniharf;
    char oku;
    FILE *f = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");
    FILE *g = fopen("/Users/alikoc/Desktop/DOSYALAR/orj.txt", "w");

    if (f == NULL || g == NULL) {
        printf("Dosya açılamadı!\n");
    } else {
        while ((oku = fgetc(f)) != EOF) {
            yeniharf = oku+3;
            fputc(yeniharf, g);
        }
        fclose(f);
        fclose(g);
    }
    return 0;
}