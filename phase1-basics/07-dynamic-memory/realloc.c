#include <stdio.h>
#include <stdlib.h>

int main(){

    int *dizi = malloc(3*sizeof(int));
    if (dizi == NULL){
        return 1;
    }

    dizi[0] = 11 ;
    dizi[1] = 22 ;
    dizi[2] = 33 ;

    printf("Dizi genişlemeden önce: ");
    for(int i=0 ; i<3 ; i++){
        printf("%d " , dizi[i]);
    }

    // 3 elemandan 5 elemana genişlet
    dizi = realloc(dizi , 5*sizeof(int));
    if(dizi == NULL) return 1;

    dizi[3] = 44 ;
    dizi[4] = 55 ;

    printf("\nDizi genişledikten sonra: ");
    for(int i=0 ; i<5 ; i++){
        printf("%d " ,dizi[i]);
    }
    
    free(dizi);
    

    return 0;
}