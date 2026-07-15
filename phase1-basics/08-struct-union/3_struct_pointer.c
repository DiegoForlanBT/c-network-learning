#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char isim[50];
    int yas;
} Kisi;

int main() {
    Kisi *ptr = malloc(sizeof(Kisi));
    if (ptr == NULL) return 1;

    // Pointer ile struct'a erişim → . değil -> kullan!
    ptr->yas = 24;

    printf("Yas : %d\n", ptr->yas);

    free(ptr);
    ptr = NULL;

    return 0;
}