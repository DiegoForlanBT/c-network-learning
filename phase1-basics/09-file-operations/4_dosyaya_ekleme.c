#include <stdio.h>

int main(){

    FILE *dosya = fopen("bilgi.txt" , "a");
    if(dosya == NULL) return 1;

    fprintf(dosya, "Yeni satır eklendi!\n");

    fclose(dosya);
    printf("Ekleme tamamlandi!");
    return 0;
}