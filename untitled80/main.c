#include <stdio.h>

int main(void) {

    char dosyaadi[256];
    FILE *dosya;

    printf("\nYazılanlar hangi dosyaya kaydedilecek?\n");
    scanf("%s", dosyaadi);

    dosya = fopen(dosyaadi, "w");

    if (dosya == NULL) {
        printf("%s adlı dosya açılamıyor!", dosyaadi);
    } else {
        fprintf(dosya,"Korkma sönmez bu şafaklarda yüzen alsancak,\n"
                "Sönmeden yurdumun üstünde tüten en son ocak!");
        printf("Yazılanlar %s dosyasına kaydedilmiştir.", dosyaadi);
        fclose(dosya);

    }
    return 0;
}