#include <stdio.h>

enum Gunler {
    PAZARTESI,
    SALI,
    CARSAMBA,
    PERSEMBE,
    CUMA,
    CUMARTESI,
    PAZAR
};

int main() {

    enum Gunler bugun = CARSAMBA;

    if (bugun == CARSAMBA) {
        printf("Bugun Carsamba!\n");
    } else {
        printf("Bugun Carsamba degil.\n");
    }

    printf("Pazartesi gunu numarasi: %d\n", PAZARTESI);
    printf("Cuma gunu numarasi: %d\n", CUMA);

    enum Gunler yarin = 3;
    printf("Yarin gunu numarasi: %d\n", yarin);

    switch (bugun) {
        case PAZARTESI:
            printf("Hafta basi, isler basladi!\n");
            break;
        case CUMARTESI:
        case PAZAR:
            printf("Hafta sonu, tatil zamani!\n");
            break;
        default:
            printf("Hafta ici, calisma zamani!\n");
            break;
    }

    return 0;
}
