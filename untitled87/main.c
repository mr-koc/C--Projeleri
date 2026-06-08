#include <stdio.h>
void sayidanmorsacevir(const char *dosya_adi) {

    FILE* hata;
    FILE* mors;
    int okusun;
    hata = fopen(dosya_adi, "r");
    mors = fopen("/Users/alikoc/Desktop/DOSYALAR/mors.txt", "a");

    if (hata == NULL && mors == NULL) {
        printf("Sistem HATA verdi: Dosya bulunamadi veya acilamadi.\n");
    } else {
        fprintf(mors,"\n-----SAYIDAN MORSA ÇEVİRİLENLER-----\n");
        while ((okusun = getc(hata)) != EOF) {

            switch (okusun) {
                case '0':
                    fputs("----- ",mors);
                    break;
                case '1':
                    fputs(".---- ",mors);
                    break;
                case '2':
                    fputs("..--- ",mors);
                    break;
                case '3':
                    fputs("...-- ",mors);
                    break;
                case '4':
                    fputs("....- ",mors);
                    break;
                case '5':
                    fputs("..... ",mors);
                    break;
                case '6':
                    fputs("-.... ",mors);
                    break;
                case '7':
                    fputs("--... ",mors);
                    break;
                case '8':
                    fputs("---..",mors);
                    break;
                case '9':
                    fputs("----. ",mors);
                    break;
                case '\n':
                    fputs("\n",mors);
                    break;
                case ' ':
                    fputs("   ",mors);
                    break;
                default:
                    break;
            }
        }
        fputs("\n",mors);
        fclose(hata);
        fclose(mors);
    }
}

int main(void) {

    sayidanmorsacevir("/Users/alikoc/Desktop/DOSYALAR/hatalar.dat");

    return 0;
}