#include <stdio.h>

struct ogrenci {
    int numara[3];
    float ortalama[3];
    int kreditoplami[3];
    int girisyili[3];
};

void fonk(struct ogrenci *o1) {

    float yedekort;
    int yedekkredi;
    int yedekgiryil;
    int yedekno;
    int i, j;
    int n = 3;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {

            if (o1->ortalama[j+1] > o1->ortalama[j]) {

                yedekort = o1->ortalama[j];
                o1->ortalama[j] = o1->ortalama[j+1];
                o1->ortalama[j+1] = yedekort;

                yedekkredi = o1->kreditoplami[j];
                o1->kreditoplami[j] = o1->kreditoplami[j+1];
                o1->kreditoplami[j+1] = yedekkredi;

                yedekgiryil = o1->girisyili[j];
                o1->girisyili[j] = o1->girisyili[j+1];
                o1->girisyili[j+1] = yedekgiryil;

                yedekno = o1->numara[j];
                o1->numara[j] = o1->numara[j+1];
                o1->numara[j+1] = yedekno;
            }

            else if (o1->ortalama[j+1] == o1->ortalama[j] && o1->kreditoplami[j+1] > o1->kreditoplami[j]) {

                yedekort = o1->ortalama[j];
                o1->ortalama[j] = o1->ortalama[j+1];
                o1->ortalama[j+1] = yedekort;

                yedekkredi = o1->kreditoplami[j];
                o1->kreditoplami[j] = o1->kreditoplami[j+1];
                o1->kreditoplami[j+1] = yedekkredi;

                yedekgiryil = o1->girisyili[j];
                o1->girisyili[j] = o1->girisyili[j+1];
                o1->girisyili[j+1] = yedekgiryil;

                yedekno = o1->numara[j];
                o1->numara[j] = o1->numara[j+1];
                o1->numara[j+1] = yedekno;
            }
            else if (o1->ortalama[j+1] == o1->ortalama[j] && o1->kreditoplami[j+1] == o1->kreditoplami[j] && o1->girisyili[j+1] > o1->girisyili[j]) {

                yedekort = o1->ortalama[j];
                o1->ortalama[j] = o1->ortalama[j+1];
                o1->ortalama[j+1] = yedekort;

                yedekkredi = o1->kreditoplami[j];
                o1->kreditoplami[j] = o1->kreditoplami[j+1];
                o1->kreditoplami[j+1] = yedekkredi;

                yedekgiryil = o1->girisyili[j];
                o1->girisyili[j] = o1->girisyili[j+1];
                o1->girisyili[j+1] = yedekgiryil;

                yedekno = o1->numara[j];
                o1->numara[j] = o1->numara[j+1];
                o1->numara[j+1] = yedekno;
            }
        }
    }
}

int main(void) {

    struct ogrenci o1;
    int t, m;

    for (t = 0; t < 3; t++) {
        printf("Lutfen sirayla %d. kisinin (No, Ortalama, Kredi Toplami, Giris Yili) giriniz: ", t+1);
        scanf("%d %f %d %d", &o1.numara[t], &o1.ortalama[t], &o1.kreditoplami[t], &o1.girisyili[t]);
    }

    fonk(&o1);

    printf("\n-------LISTE-------\n");
    for (m = 0; m < 3; m++) {
        printf("%d %f %d %d\n", o1.numara[m], o1.ortalama[m], o1.kreditoplami[m], o1.girisyili[m]);
    }

    return 0;
}