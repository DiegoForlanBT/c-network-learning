#include <stdio.h>
#include <stdlib.h>

int main(){
    // malloc'tan farklı olarak otomatil sıfır ile doldurur
    int *dizi = calloc (5 , sizeof(int));

    if(dizi == NULL) return 1 ;

    for(int i =0 ; i<5 ; i++){
        printf("%d " , dizi[i]);
    }
    free(dizi);
    return 0 ;

}
