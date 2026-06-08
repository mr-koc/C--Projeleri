#include <stdio.h>

// Yapı Tanımlaması
struct personel {
    char ad[50];
    char soyad[50];
    float satis; // Performans değeri buraya yazılacak
};

/* --- YARDIMCI FONKSİYONLAR (SADELEŞTİRİLMİŞ) --- */

// Metin Karşılaştırma (strcmp mantığı - İndis kullanarak)
// Eğer 1. metin alfabetik olarak sonra geliyorsa 1, önce geliyorsa -1, eşitse 0 döner.
int metinKarsilastir(char s1[], char s2[]) {
    int i = 0;
    // İki metnin karakterleri aynı olduğu sürece ve metin bitmediği sürece ilerle
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0; // İkisi de aynı anda bitti, metinler eşit
        }
        i++;
    }

    // Döngüden çıktıysa fark bulmuştur. Hangisi büyük kontrol et:
    if (s1[i] > s2[i]) {
        return 1; // Birinci metin alfabetik olarak daha büyük (sonra gelir)
    } else {
        return -1; // Birinci metin alfabetik olarak daha küçük (önce gelir)
    }
}

// Metin Kopyalama (strcpy mantığı - İndis kullanarak)
// Kaynak metni, hedef metnin içine kopyalar.
void metinKopyala(char hedef[], char kaynak[]) {
    int i = 0;
    while (kaynak[i] != '\0') {
        hedef[i] = kaynak[i];
        i++;
    }
    hedef[i] = '\0'; // Metnin bittiğini belirten karakteri en sona ekle
}

/* --- ANA FONKSİYONLAR --- */

// a) Dosyadan okuma ve performans hesaplama
void ekleDegistir(struct personel p[], int boyut) {
    FILE *dosya = fopen("satis.txt", "r");
    if (dosya == NULL) {
        printf("Hata: satis.txt dosyasi bulunamadi!\n");
        return;
    }

    float enBuyukSatis = 0.0;
    int i;

    // Verileri oku ve En Büyük (ENB) satışı bul
    for (i = 0; i < boyut; i++) {
        fscanf(dosya, "%s %s %f", p[i].soyad, p[i].ad, &p[i].satis);

        if (p[i].satis > enBuyukSatis) {
            enBuyukSatis = p[i].satis;
        }
    }
    fclose(dosya);

    // Performans değerini hesapla: SPD = ENB - SD
    for (i = 0; i < boyut; i++) {
        p[i].satis = enBuyukSatis - p[i].satis;
    }
}

// b) Sıralama ve dosyaya yazma
void siralayarakYazdir(struct personel p[], int boyut) {
    int i, j;
    struct personel gecici; // Yer değiştirme için geçici değişken

    // Bubble Sort (Kabarcık Sıralaması) ile Ada göre sırala
    for (i = 0; i < boyut - 1; i++) {
        for (j = 0; j < boyut - 1 - i; j++) {

            // Eğer p[j] ismi alfabetik olarak p[j+1]'den büyükse (Örn: 'B' > 'A')
            if (metinKarsilastir(p[j].ad, p[j+1].ad) == 1) {

                // --- Yer Değiştirme (Swap) Başlangıcı ---

                // Ad kopyala
                metinKopyala(gecici.ad, p[j].ad);
                metinKopyala(p[j].ad, p[j+1].ad);
                metinKopyala(p[j+1].ad, gecici.ad);

                // Soyad kopyala
                metinKopyala(gecici.soyad, p[j].soyad);
                metinKopyala(p[j].soyad, p[j+1].soyad);
                metinKopyala(p[j+1].soyad, gecici.soyad);

                // Satış/Performans kopyala (Sayı olduğu için direkt eşitlenir)
                gecici.satis = p[j].satis;
                p[j].satis = p[j+1].satis;
                p[j+1].satis = gecici.satis;

                // --- Yer Değiştirme Bitişi ---
            }
        }
    }

    // Dosyaya Yazma İşlemi
    FILE *cikisDosyasi = fopen("prfrmns.txt", "w");
    if (cikisDosyasi == NULL) {
        printf("Hata: prfrmns.txt dosyasi olusturulamadi!\n");
        return;
    }

    for (i = 0; i < boyut; i++) {
        // İstenen format: AD SOYAD PERFORMANS
        fprintf(cikisDosyasi, "%s %s %.2f\n", p[i].ad, p[i].soyad, p[i].satis);
    }

    fclose(cikisDosyasi);
    printf("Islem basarili. 'prfrmns.txt' olusturuldu.\n");
}

int main() {
    struct personel calisanlar[12];

    // 1. Adım: Oku ve Hesapla
    ekleDegistir(calisanlar, 12);

    // 2. Adım: Sırala ve Yaz
    siralayarakYazdir(calisanlar, 12);

    return 0;
}