#include <stdio.h>

int main(void) {
    char tur;
    int yas;
    int hacim;


    printf("Lutfen aracınızın turunu giriniz: ");
    scanf("%c", &tur);

    printf("Lutfen aracınızın yasını giriniz: ");
    scanf("%d", &yas);

    switch (tur) {
        case 'm':
            if (yas<=6 && yas>=1) {
                printf("543 TL.");
                printf("Taksit bedeli: 261.5");
            }else if (yas>=7 && yas<=15) {
                printf("346 TL");
                printf("Taksit bedeli: 173TL");
            }else {
                printf("172 TL");
                printf("Taksit bedeli: 86 TL");
            }
            break;

        case 'p':
            printf("aracınızın hacmi nedir:");
            scanf("%d", &hacim);
            if (yas<=6 && yas>=1) {
                if (hacim<=1900) {
                    printf("697 TL");
                }else {
                    printf("1052 TL");
                }else if{
                    if (yas<=15 && yas>=7) {
                        if (hacim<=1900) {
                            printf("436 TL");
                        }else {
                            printf("697 TL");
                        }
                    } else if {
                        if (yas<=15 && yas>=7) {
                            if (hacim<=1900) {
                                printf("260 TL");
                            }else {
                                printf("436 TL");
                            }
                        }

                break;


            }
    }


    return 0;
}