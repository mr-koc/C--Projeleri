#include <stdio.h>

void ayristir(int *sayi) {
           int yil=0, ay=0, gun=0;
           yil=((*sayi)/365);
           ay =((*sayi)%365)/30;
           gun=((*sayi)%365)%30;

       printf("Bu süre %d yıl, %d ay ve %d gün eder.", yil,ay,gun);
}

int main(void) {
    int sayi;

    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);

    ayristir(&sayi);


    return 0;
}