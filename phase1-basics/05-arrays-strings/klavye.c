#include <stdio.h>

int main() {
    char isim[50];

    printf("Adinizi girin: ");
    fgets(isim, 50, stdin);  // scanf yerine fgets daha guvenli!

    printf("Merhaba, %s", isim);

    return 0;
}