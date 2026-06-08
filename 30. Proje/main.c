#include <stdio.h>


int main() {
    int vizenotlar[5];
    int finalnotlar[5];
    int i, a, toplam1, toplam2;
    int n=5;
    float vizeortalama, finalortalama, sonuc;
    float ortalama[5];

    for (i=0; i<5; i++) {
        printf("%d. kişinin vize notunu giriniz:", i+1);
        scanf("%d", &vizenotlar[i]);

    }
    for (i=0; i<5; i++) {
        printf("%d. kişinin final notunu giriniz:", i+1);
        scanf("%d", &finalnotlar[i]);

    }

    for (i=0; i<5; i++) {
        ortalama[i]= vizenotlar[i]*(0.40) + finalnotlar[i]*(0.6);
        printf("%d. Ogrencinin Ortalamasi: %f\n", i+1, ortalama[i]);
    }

    return 0;
}