#include <stdio.h>

int main(void) {
    int a = 123456;


    do {
        printf("Lutfen parolayi giriniz: ");
        scanf("%d", &a);

    }while(a != 123456);
    printf("AFERİN LA DOĞRU GİRDİN AMK");
    return 0;
}