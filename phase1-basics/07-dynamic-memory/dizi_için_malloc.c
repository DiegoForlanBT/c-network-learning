#include <stdio.h>
#include <stdlib.h>

int main(){

    // dizi için eleman sayısı belirledik
    int n = 5 ;

    // Heap'te yer ayırmamız gerekiyor
    int *dizi = malloc(n*sizeof(int));

    // NULL kontrolü
    if(dizi == NULL) return 1;

    // değer ata
    for(int i=0 ; i<n ; i++){
        dizi[i]= (i+1)*10;
    }

    // yazdır 
    for(int i=0 ; i<n ; i++){
        printf("%d " , dizi[i]);
    }

    printf("\n");

    free(dizi); // Belleği serbest bırak
    dizi = NULL;
 

    return 0 ;
}