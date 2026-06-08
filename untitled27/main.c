#include <stdio.h>

float kuvvet(float G,float m1,float m2, float R) {
    return G* ((m1*m2)/(R*R));
}

int main(void) {
    int a,b;
    float c;
    float G;
    G=6.673;

    printf("Lutfen sırayla cisimlerin ağırlığını kg cinsinden giriniz: ");
    scanf("%d %d", &a, &b);

    printf("Lutfen cisimlerin arasındaki uzaklığı metre cinsinden sırasıyla giriniz:");
    scanf("%f", &c);

    float sonuc = kuvvet(G,a,b,c);
    printf("%f",sonuc);
    return 0;
}