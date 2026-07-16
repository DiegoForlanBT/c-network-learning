#include <stdio.h>
/*
Açma Modları
ModAnlamı"r"Okuma (dosya yoksa hata)
"w"Yazma (dosya yoksa oluştur, varsa sil!)
"a"Ekleme — append (dosya sonuna ekle)
"r+"Okuma + Yazma
"rb"Binary okuma
"wb"Binary yazma
*/

int main(){
    FILE *dosya =  fopen("test.txt" , "w");

    if(dosya == NULL){
        printf("Dosya acilamadi!");
        return 1;
    }

    printf("Dosya basariyla acildi");

    fclose(dosya);

    return 0;
}