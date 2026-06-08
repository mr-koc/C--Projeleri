#include <stdio.h>

int main(void) {

    char oku[200];
    int karakter;
    int i,dosyauzunlugu;
    FILE *hedefdosya, *kaynakdosya;

    hedefdosya = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");
    kaynakdosya = fopen("/Users/alikoc/Desktop/DOSYALAR/yedek.bak.txt","w");

    if(hedefdosya == NULL || kaynakdosya == NULL) {
        printf("Dosya Açılamadı!\n");
    } else {
        fseek(hedefdosya, 0, SEEK_END);
        dosyauzunlugu = ftell(hedefdosya);

        for (i= dosyauzunlugu -1; i>=0; i--) {
            fseek(hedefdosya, i, SEEK_SET);

            karakter = fgetc(hedefdosya);

            if (karakter != EOF) {
                fputc(karakter, kaynakdosya);
            }
        }
    }
    printf("Dosyanın tersi olan \"yedek.bak\" oluşturuldu.\n");

    fclose(kaynakdosya);
    fclose(hedefdosya);
    return 0;
}