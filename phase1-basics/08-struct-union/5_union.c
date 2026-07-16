#include <stdio.h>

//Struct'a benzer ama tüm üyeler aynı bellek alanını paylaşır:


// ÖNEMLİ BİR NOT !!!!
/*
"Tek bir memory adresi, birden fazla veri tipiyle kullanılabilir 
ama bir anda sadece 1 tanesi yazılabilir"
*/
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