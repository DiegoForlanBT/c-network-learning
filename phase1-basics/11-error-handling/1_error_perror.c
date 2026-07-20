/*
     C kütüphane fonksiyonları hata verdiğinde (örneğin dosya bulunamadığında)
    global bir değişken olan errno içine bir hata kodu bırakır. perror() fonksiyonu 
    ise bu kodu okuyup ekrana insan dilinde yazar.
*/

#include <stdio.h>
#include <errno.h> // Hata kodları için gerekli kütüphane
#include <string.h> // strerror için

int main(){

    FILE *dosya = fopen("olmayan_network.txt" , "r");

     
    if(dosya == NULL) {
        // yöntem 1 perror ile yazıdrma
        perror("dosya acilmadi!");

    // yöntem 2: errno değerini stringini ve karşılığını kendin yazdır
    printf("Hata kodu (errno) : %d \n" , errno);
    printf("Hata aciklamasi: %s\n" , strerror(errno));

    return 1;
    }

    fclose(dosya);

    return 0;
}