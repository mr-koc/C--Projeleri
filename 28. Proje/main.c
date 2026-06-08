#include <stdio.h>

float fonk(float a,float b) {

    float sonuc;

    return sonuc=a/(b*b);

}

int main(void) {

    float a,b;
    float Vki_degeri;


    printf("Lütfen kilonuzu kg cinsinden yazınız: ");
    scanf("%f", &a);

    printf("Lütfen boyunuzu metre cinsinden giriniz: ");
    scanf("%f", &b);

    if (b>2.51) {
        printf("Hatalı değer girdiniz: ");
    } else if (a>635.0) {
        printf("Hatalı değer girdiniz.");
    }


    Vki_degeri=fonk(a,b);
    printf("Vücut Kitle Endeksi: %f\n",Vki_degeri);

    if (Vki_degeri>=10 && Vki_degeri<=15) {
        printf("\nHayati risk taşıyorsunuz! Hemen bir sağlık kurumuna başvurunuz.\n");
        printf("\n1. Acil Tıbbi Kontrol\n");
        printf("\n2. Kademeli Artış\n");
        printf("\n3. Sıvı Kalori Tüketimi\n");
        printf("\n4. Sık Beslenme\n");
        printf("\n5. Hareketi Sıfırla\n");
        printf("\n6. Yemeği Zenginleştir.\n");
        printf("\n7. Suyu Ayır.\n");
        printf("\n---Product by Ali Koç---\n");
    } else if (Vki_degeri>15 && Vki_degeri<=18.5) {
        printf("\nZayıf olarak değerlendirilmektesin! Hayati risk taşımıyorsunuz.\n");
        printf("\n1. Bir sağlık kurumunda gizli bir sağlık sorununuzun olmadığını kontrol ettiriniz.\n");
        printf("\n2. Hacim alma amaçlı değil kalori odaklı besleniniz.\n");
        printf("\n3. Gizli kkalori kaynakları kullanın. Örneğin zeytinyağı.\n");
        printf("\n4. Ev yapımı gainer(içilebilir gıda takviyesi) tüketiniz.\n");
        printf("\n5. Kardiyoyu bırakınız ve kısa süreli ağırlık antrenmanı yapınız.Bu kilonun göbek bölgesinde değil kas olarak kazanılmasını sağlar.\n");
        printf("\n6. Sürekli kuruyemiş tüketin.\n");
        printf("\n7. Kahvaltıyı es geçmeyiniz.\n");
        printf("\n8. Yemekten 30 dakika önce ve yemekten 30 dk sonra su içmeyiniz.\n");
        printf("\n---Product by Ali Koç---\n");
    } else if (Vki_degeri>18.5 && Vki_degeri<=24.9) {
        printf("\nNormal olarak değerlendirilmektesiniz! Hedefiniz kiloyu korumak ve vücut kompozisyonunu korumak olmalıdır.\n");
        printf("\n1. Yağ oranınızı düşürün ve kas kütlenizi arttırın.\n");
        printf("\n2. Beslenmenize dikkat ediniz.\n");
        printf("\n3. Şeker ve fast food yeme alışkanlıklarınızı sınırlayınız.\n");
        printf("\n4. spor yapmaya özen gösteriniz\n");
        printf("\n5. Protein tüketiminize dikkat ediniz.\n");
        printf("\n6. Su tüketiminize dikkat ediniz.\n");
        printf("\n---Product by Ali Koç---\n");
    } else if (Vki_degeri>24.9 && Vki_degeri<=29.9) {
        printf("\nObez olarak değerlendirilmemektesiniz fakat obez olmaya sarı ışık yakmış durumdasınız.\n");
        printf("\nBoş kalori musluğunu kapatınız.\n");
        printf("\nAkşam yemeğinizi saat kaçta yediğinize dikkat ediniz.\n");
        printf("\nHareketinizi arttırın.\n");
        printf("\nEkmek tüketiminizi sınırlayınız.\n");
        printf("\nDuygusal açlığınızın farkında olun ve kontrol etmeye çalışın.\n");
        printf("\nHaftada bir gün tartı günü yapınız.\n");
        printf("\n---Product by Ali Koç---\n");
    } else if (Vki_degeri>=30) {
        printf("\nObez olarak değerlendirilmektesiniz. Tedavi görmeniz gerekmektedir.\n");
        printf("\nYakın bir sağlık kurumuna başvurunuz.\n");
        printf("\n1. Kan tahlili yaptırınız.\n");
        printf("\n2. Koşmak yasak ama yürümek şarttır.\n");
        printf("\n3. Beyaz ürünleri(un, şeker, prinç...) hayatınızdan çıkarınız.\n");
        printf("\n4. Öğünlerinizi azaltınız.\n");
        printf("\n5. Sebze odaklı protein alın.\n");
        printf("\n6. Su içmek zorundasınız.\n");
        printf("\n7. Yemekleriniz yavaş tüketin.\n");
        printf("\n8. Evdeki sizi tetikleyecek ürünleri temizleyiniz.\n");
        printf("\n---Product by Ali Koç---\n");
    }

    return 0;
}