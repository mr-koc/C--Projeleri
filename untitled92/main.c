#include <stdio.h>

int main(void) {
    int taban_degeri = 5;
    int yukseklik_degeri = 5;
    int alan = 12.50;
    printf("taban degerini giriniz: ");
    scanf("%d", &taban_degeri);
    printf("yukseklik degeri giriniz: ");
    scanf("%d", &yukseklik_degeri);
    alan = taban_degeri * yukseklik_degeri;
    printf("alanı manuel olarak giriniz: " , &alan);
    scanf("%d" , &alan);
    printf("alan: %d\n" , alan);
    return 0;
}
