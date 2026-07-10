#include <stdio.h>

int main(){

    int sayi = 10 ;
    int *ptr = &sayi;

    printf("sayı : %d\n",sayi);
    printf("sayının hafızadaki adresi : %d\n" ,&sayi );

    printf("sayı pointer ile : %d \n" , *ptr);
    printf("sayının adresi pointer ile : %d \n" , ptr);

    return 0 ;
}