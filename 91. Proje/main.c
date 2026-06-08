#include <stdio.h>

int main(void) {

    char liste[100][50];
    int toplam = 0;
    int i, j, k;

    FILE *f = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");
    FILE *g = fopen("/Users/alikoc/Desktop/DOSYALAR/eposta.txt", "w");

    if (f != NULL && g != NULL) {

        while (fscanf(f, "%s", liste[toplam]) != EOF) {
            toplam++;
        }


        for (i = 0; i < toplam; i++) {

            int daha_once_var = 0;

            for (j = 0; j < i; j++) {

                int ayni = 1;
                for (k = 0; liste[i][k] != '\0' || liste[j][k] != '\0'; k++) {
                    if (liste[i][k] != liste[j][k]) {
                        ayni = 0;
                        break;
                    }
                }
                if (ayni == 1) {
                    daha_once_var = 1;
                    break;
                }
            }

            if (daha_once_var == 0) {
                fprintf(g, "%s\n", liste[i]);
            }
        }

        printf("Islem tamam. Tekrarlar temizlendi.\n");

        fclose(f);
        fclose(g);
    } else {
        printf("Dosya acilamadi!\n");
    }

    return 0;
}