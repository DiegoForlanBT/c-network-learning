#include <stdio.h>

void selamla(char isim[]){
    printf("Merhaba , %s !\n" , isim);
}


int main(){

    selamla("Diego");
    selamla("Max");

    return 0;
}