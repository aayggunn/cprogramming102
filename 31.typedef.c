#include <stdio.h>
#include <string.h>

struct Ogrenci {
    char isim[50];
    int yas;
    float ortalama;
};

typedef struct {
    char isim[50];
    int yas;
    float ortalama;
} Ogrenci;

int main() {

    struct Ogrenci ogrenci1;
    strcpy(ogrenci1.isim, "Ahmet");
    ogrenci1.yas = 20;
    ogrenci1.ortalama = 3.5;

    Ogrenci ogrenci2;
    strcpy(ogrenci2.isim, "Ayse");
    ogrenci2.yas = 21;
    ogrenci2.ortalama = 3.8;

    printf("Ogrenci 1: %s, %d yasinda, ortalama: %.2f\n", ogrenci1.isim, ogrenci1.yas, ogrenci1.ortalama);
    printf("Ogrenci 2: %s, %d yasinda, ortalama: %.2f\n", ogrenci2.isim, ogrenci2.yas, ogrenci2.ortalama);

    return 0;
}
