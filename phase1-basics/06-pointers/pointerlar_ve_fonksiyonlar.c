#include <stdio.h>

    void kopya(int x){
        x = 999 ;
    }

    void degistir(int *x){
        *x = 121 ;
    }

int main(){

    int sayi = 14 ;
    kopya(sayi);
    printf("kopya sonrası sayı : %d\n" , sayi );

    degistir(&sayi);
    printf("degistir sonrası sayı : %d \n" , sayi);

    return 0 ;
}