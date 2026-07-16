#include <stdio.h>

int main(){

    FILE *dosya = fopen("bilgi.txt" , "r");
    if(dosya == NULL) return 1;

    char satir[100];

    // satır satır oku
    while(fgets(satir , 100 , dosya) !=  NULL){
        printf("%s ", satir);
    }

    fclose(dosya);



    return 0;
}