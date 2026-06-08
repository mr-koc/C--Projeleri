#include <stdio.h>

void haftagunsaatbul(int *sayi) {

    int hafta, gun, saat;

    hafta = (*sayi)/168;
    gun = ((*sayi)%168)/24;
    saat = ((*sayi)%168)%24;

    printf("Girilen süre: %d hafta, %d gün, %d saat eder.", hafta,gun,saat);

}
int main(void) {
    int sayi;
    printf("Süreyi giriniz (saat) :");
    scanf("%d",&sayi);

    haftagunsaatbul(&sayi);

    return 0;
}