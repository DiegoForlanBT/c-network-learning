#include <stdio.h>

int main (){

    FILE *dosya = fopen("bilgi.txt" , "w");
    if(dosya == NULL) return 1;

    fprintf(dosya, "İsim: Baris Taskiran\n");
    fprintf(dosya, "Yas: 24\n");
    fprintf(dosya, "Meslek: Target->Network Engineer\n");

    fclose(dosya);
    printf("Yazma tamamlandı !!");
    return 0;
}