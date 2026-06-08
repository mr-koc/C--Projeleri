#include <stdio.h>

int main(void) {
    int a;
    int b, c, d, e;

    printf("Lutfen 4 basamaklı bir sayı giriniz: ");
    scanf("%d", &a);


    b = (a / 1000) % 10;
    c = (a / 100) % 10;
    d = (a / 10) % 10;
    e = a % 10;

    if (b!=c) {
        printf("2 farklı sayı giriniz.");
    } else if (c!=d) {
        printf("2 farklı sayı girdiniz.");
    } else if (e!=b) {
        printf("2 farklı sayı girdiniz.");
    } else if (b!=c && c!=d) {
        printf("3 farklı sayı girdiniz.");
    }else if (b!=c && c!=e) {
        printf("3 farklı sayı girdiniz.");
    } else if (b!=d && c!=e) {
        printf("3 farklı sayı girdiniz.");
    } else if (b!=d && c!=d) {
        printf("3 farklı sayı girdiniz.");
    } else if (b!=e && c!=d) {
        printf("3 farklı sayı girdiniz.");
    } else if (b==c&&d==e&& c==d) {
        printf("1 farklı sayı girdiniz.");
    }else
        printf("4 farklı sayı girdiniz.");

    return 0;
}