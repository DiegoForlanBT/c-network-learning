#include <stdio.h>

int main(){

    int sayi = 11 ;
    int *ptr = &sayi; // pointer tanımlama

    printf("önce sayı : %d \n" , sayi);

    *ptr = 99 ;
    printf("sonra sayı : %d\n" , sayi);

    return 0 ;
}