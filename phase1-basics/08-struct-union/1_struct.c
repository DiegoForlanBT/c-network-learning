#include <stdio.h>
// Struct tanımı
/*
1. Struct Nedir?
Farklı veri tiplerini bir arada tutan yapı. 
Java'daki class'a benzer ama sadece veri tutar, metot olmaz.
*/


#include <stdio.h>
#include <string.h>

struct Araba {

    char model[50];
    int model_yili;
    float top_speed;
};

int main(){

    struct Araba a1;

    a1.model_yili = 2010;
    a1.top_speed = 245.50;
    strcpy(a1.model , "Camaro Z1");

    printf("yıl : %d\n" , a1.model_yili);
    printf("top speed :%2.f \n" , a1.top_speed);
    printf("model : %s\n" , a1.model);

}
