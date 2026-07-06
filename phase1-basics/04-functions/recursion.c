
#include <stdio.h>

// recursion function
int faktoriyel(int n){

    if (n==0) return 1 ;

    return n*faktoriyel(n-1);
}


int nToplam(int n){
    if(n==0) return 0;

    return n + nToplam(n-1);

}

int usAlma(int n , int m){

    if (m==0) return  1;

    return n*usAlma(n , m-1); 

}


void geriSayim(int n){
    if (n==0) {
        printf("Ates !");
    return ;
    }
    printf("%d\n" , n);
    return geriSayim(n-1);
}

int main(){

    int sonuc = faktoriyel(5);
    printf("sonuc : %d \n" , sonuc);

    int toplam = nToplam(10);
    printf("toplam : %d \n", toplam );

   

    int us = usAlma(3,4);
    printf("üslü sayı : %d" , us);
     printf("\n");


    geriSayim(10);
    


}