#include <stdio.h>

int main(void) {

    int i;
    char c, kaynakadi[500];
    char dosyaadi[500];


    printf("Lütfen dosya yolunu (/Users/alikoc/Desktop/agalar.txt) giriniz: ");
    scanf("%s", kaynakadi);
    printf("Lütfen aktarılacak dosya adini (/Users/alikoc/Desktop/agalar.txt) giriniz: ");
    scanf("%s", dosyaadi);

    FILE *f = fopen(kaynakadi, "r");
    FILE *g = fopen(dosyaadi, "w");

    if (f == NULL) {
        printf("HATALI İŞLEM\n");
    } else {
        while ((fscanf(f, "%s", kaynakadi) != EOF) ) {

            for (i=0; kaynakadi[i] != '\0'; i++) {
                c= kaynakadi[i];

                if (c != 'a' && c != 'e'  && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I'  && c != 'O' && c != 'U' ) {
                    fprintf(g, "%c", c);
                }
            }
            fprintf(g, " ");
        }
        fclose(f);
        fclose(g);
    }
    return 0;
}