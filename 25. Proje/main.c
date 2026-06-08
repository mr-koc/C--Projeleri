#include <stdio.h>

float fonk(float a,char miktar) {
float sonuc=0;

    switch (miktar) {
        case 'y':
            printf("Ne kadar yardanız var: ");
            scanf("%f", &a);
            sonuc= a*0.9144;
            break;

        case 'g':
            printf("Ne kadar gramınız var: ");
            scanf("%f", &a);
            sonuc= a/0.9144;
            break;
    }
 return sonuc;
}

int main(void) {
    float a = 0;
    char secim;

    printf("Cins giriniz (y/m): ");
    scanf("%c", &secim);

    printf("sonuc=%f\n", fonk(a, secim));
    return 0;
}