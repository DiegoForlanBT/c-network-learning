#include <stdio.h>

int main(){


    int a,b ;
    a = 20 ;
    b = 5 ;


    // Aritmetik Operatörler
    printf("Toplama = %d \n" , (a+b));
    printf("Çıkarma = %d \n" , (a-b));
    printf("Çarpma = %d \n" , (a*b));
    printf("Bölme = %d \n" , (a/b));
    printf("Mod = %d \n" , (a%b));


    // Karşılaştırma operatörleri
    printf("\n a>b : %d\n" , a>b);
    printf(" a<b : %d\n", a<b);
    printf(" a==b : %d\n" , a==b);


    // Mantıksal Operatörler
    printf("\n&&(ve) : %d \n" , a>10 && b<10);
    printf("||(veya) : %d \n" , a>10 || b<10);
    printf("!(değil) : %d \n" , !(a>10));


    return 0 ;
}