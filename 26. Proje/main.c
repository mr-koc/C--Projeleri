#include <stdio.h>

int fonk(int islem, int a,int b) {

int sonuc;

    if (a<1000 && b<1000) {
    }else {
        return 0;
    }


    switch (islem) {
        case '-':
            if (a>b) {
                sonuc=a-b;
            }else if (a<b) {
                sonuc=b-a;
            } else {
                printf("Hatalı girdi işleminde bulundunuz.");
            }
            break;
        case '+':
            sonuc=a+b;
            break;
    }

  return sonuc;
}

int main(void) {
    char islem;
    int a, b;
    printf("Lütfen yapmak istediğiniz işlemi girin: ");
    scanf("%c", &islem);
    printf("Lütfen sırayla sayıları giriniz: ");
    scanf("%d %d" , &a,&b);
     fonk(islem,a,b);
    printf("%d\n",fonk(islem,a,b));

    return 0;
}