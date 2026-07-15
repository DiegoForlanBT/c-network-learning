#include <stdio.h>

union Data {

    int tamSayi ;
    float ondalikliSayi;
    char karakter;
};


int main(){

    union Data veri ;
    veri.tamSayi = 65;

    printf("int: %d \n",  veri.tamSayi);
    printf("char: %c\n", veri.karakter);

}