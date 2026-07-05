#include <stdio.h>

int main() {

    int gun = 7 ;

    switch(gun) {

        case 1 : printf("Pazartesi"); break ;
        case 2 : printf("Salı"); break ;
        case 3 : printf("Çarşamba"); break ;
        case 4 : printf("Perşembe"); break ;
        case 5 : printf("Cuma"); break ;
        case 6 : printf("Cumartesi"); break ;
        case 7 : printf("Pazar"); break;

        default : printf("Girdiyi kontrol ediniz !!!"); break ;



    }

return 0 ;
}