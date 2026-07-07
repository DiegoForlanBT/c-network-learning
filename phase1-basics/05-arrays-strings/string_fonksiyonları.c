#include <stdio.h>
#include <string.h>

int main(){
    char s1[20] = "Merhaba";
    char s2[20]="Dünya";

    //uzunluk - strlen : string length
    printf("uzunluk : %d\n" , strlen(s1));

    //kopyalama - strcopy : string copy
    strcpy(s1 , s2);
    printf("Kopyalandı : %s" , s1);

    // karşılaştırma
    int sonuc = strcmp("abc" , "abc");
    printf("eşit mi ? : %d\n" , sonuc); // 0 : eşit

    // Birleştirme
    char tam[40] = "Merhaba";
    strcat(tam," Dünya");
    printf("Birleştirme : %s" , tam);


}