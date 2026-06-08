#include <stdio.h>

int main() {
    // Dosya yolunu bir değişkene atayalım (Mac formatı)
    const char *dosya_yolu = "/Users/alikoc/Desktop/ogrenci.dat.txt";

    // Veri yapıları
    long long no[20];
    int notlar[20][6];
    float ogr_ort[20];

    // İstatistikler
    float ders_toplamlari[6] = {0};
    float sinif_genel_toplam = 0;
    int ogrenci_sayisi = 0;

    // --- 1. ADIM: DOSYAYI OKU ("r" modu) ---
    FILE *dosya = fopen(dosya_yolu, "r");

    if (dosya == NULL) {
        printf("HATA: Dosya belirtilen konumda bulunamadi!\n");
        printf("Konum: %s\n", dosya_yolu);
        return 1;
    }

    // Dosyadan verileri çek
    while (ogrenci_sayisi < 20 && fscanf(dosya, "%lld %d %d %d %d %d %d",
           &no[ogrenci_sayisi],
           &notlar[ogrenci_sayisi][0], &notlar[ogrenci_sayisi][1], &notlar[ogrenci_sayisi][2],
           &notlar[ogrenci_sayisi][3], &notlar[ogrenci_sayisi][4], &notlar[ogrenci_sayisi][5]) != EOF) {

        ogrenci_sayisi++;
    }
    fclose(dosya); // Okuma bitti, dosyayı kapat. (Veriler artık RAM'de)

    // --- 2. ADIM: HESAPLAMALAR ---
    for(int i = 0; i < ogrenci_sayisi; i++) {
        float toplam = 0;
        for(int j = 0; j < 6; j++) {
            toplam += notlar[i][j];
            ders_toplamlari[j] += notlar[i][j];
        }
        ogr_ort[i] = toplam / 6.0;
        sinif_genel_toplam += ogr_ort[i];
    }

    // --- 3. ADIM: SONUÇLARI AYNI DOSYAYA YAZ ("w" modu) ---
    // Dikkat: Bu işlem dosya içeriğini siler ve yeni tabloyu yazar.
    dosya = fopen(dosya_yolu, "w");

    if (dosya == NULL) {
        printf("Dosya yazma modunda acilamadi (Izin hatasi olabilir)!\n");
        return 1;
    }

    // Tablo Başlığı
    fprintf(dosya, "Ogrenci No       Notlar                     Ortalama\n");
    fprintf(dosya, "----------------------------------------------------\n");

    for(int i = 0; i < ogrenci_sayisi; i++) {
        // Numarayı yaz
        fprintf(dosya, "%-15lld", no[i]);

        // 6 ders notunu yaz
        for(int j = 0; j < 6; j++) {
            fprintf(dosya, "%-4d", notlar[i][j]);
        }

        // Ortalamayı yaz
        fprintf(dosya, " -> %.2f\n", ogr_ort[i]);
    }

    // Alt bilgi (Genel Ortalamalar)
    fprintf(dosya, "\n----------------------------------------------------\n");
    fprintf(dosya, "DERS ORTALAMALARI:\n");
    for(int k = 0; k < 6; k++) {
        fprintf(dosya, "%d. Ders: %.2f  ", (k+1), ders_toplamlari[k] / ogrenci_sayisi);
    }
    fprintf(dosya, "\n\nSINIF GENEL ORTALAMASI: %.2f\n", sinif_genel_toplam / ogrenci_sayisi);

    fclose(dosya);

    printf("Islem basarili!\nDosya guncellendi: %s\n", dosya_yolu);

    return 0;
}