#include <stdio.h>

void ziynetSayisiniBul(float *eldekipara, float *satisfiyati) {

    float ceyrek, tam, yarim;
    float kalanpara;


    float guncelPara = *eldekipara;
    float tamFiyat = *satisfiyati;
    float yarimFiyat = *satisfiyati / 2.0;
    float ceyrekFiyat = *satisfiyati / 4.0;



    tam = (int)(guncelPara / tamFiyat);

    guncelPara = guncelPara - (tam * tamFiyat);


    yarim = (int)(guncelPara / yarimFiyat);
    guncelPara = guncelPara - (yarim * yarimFiyat);


    ceyrek = (int)(guncelPara / ceyrekFiyat);
    guncelPara = guncelPara - (ceyrek * ceyrekFiyat);


    kalanpara = guncelPara;


    printf("Elinizdeki para ile %.0f adet tam, %.0f adet yarim ve %.0f adet de ceyrek altin alabilirsiniz.\n", tam, yarim, ceyrek);
    printf("Kalan paraniz: %f TL", kalanpara);
}

int main(void) {

    float eldekipara, satisfiyati;

    printf("Para miktarinizi giriniz (TL): ");
    scanf("%f", &eldekipara);
    printf("Ziynet altinin satis fiyatini giriniz: ");
    scanf("%f", &satisfiyati);
    printf("------------------------------------------\n");

    ziynetSayisiniBul(&eldekipara, &satisfiyati);

    return 0;
}