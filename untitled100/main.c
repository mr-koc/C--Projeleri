#include <stdio.h>

int main(void) {

    char ad[30][30], soyad[30][30];
    float ort[30], ales[30], uds[30], kacinci[30];
    float yedekort[30], yedekales[30], yedekuds[30];
    char yedekad, yedeksoyad;

    int i = 0, j, k, m;
    float sonuc[30], yedeksonuc;

    FILE *f = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");
    FILE *g = fopen("/Users/alikoc/Desktop/DOSYALAR/yedek.bak..txt", "w");

    if (f == NULL || g == NULL) {
        printf("Dosya Açılamadı!\n");
    } else {

        while(fscanf(f, "%f %s %s %f %f %f", &kacinci[i], ad[i], soyad[i], &ort[i], &ales[i], &uds[i]) != EOF) {

            yedekort[i] = ort[i]*(0.25);
            yedekales[i] = ales[i]*(0.5);
            yedekuds[i] = uds[i]*(0.25);
            sonuc[i] = yedekort[i] + yedekales[i] + yedekuds[i];
            i++;
        }

        for (j=0; j < i-1; j++) {
            for (k=0; k < i-1-j; k++) {

                if (sonuc[k] < sonuc[k+1]) {

                    yedeksonuc = sonuc[k];
                    sonuc[k] = sonuc[k+1];
                    sonuc[k+1] = yedeksonuc;

                    for(m=0; m<30; m++) {
                        yedekad = ad[k][m];
                        ad[k][m] = ad[k+1][m];
                        ad[k+1][m] = yedekad;

                        yedeksoyad = soyad[k][m];
                        soyad[k][m] = soyad[k+1][m];
                        soyad[k+1][m] = yedeksoyad;
                    }
                }
            }
        }

        for(j=0; j<5; j++){
            fprintf(g, "%s %s %f\n", ad[j], soyad[j], sonuc[j]);
        }

        fclose(f);
        fclose(g);
    }

    return 0;
}