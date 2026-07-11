#include <stdio.h>
#include <stdlib.h>

int main(){

    // 1 tane pointer için Heap'te yer ayrıldı. 
    int *ptr = malloc(sizeof(int));

    // pointer NULL kontrolü yap mutlaka !
    if (ptr == NULL ){
        printf("Bellek ayrılamadı !!\n");
        return 1;
    }

    *ptr = 4444 ;
    printf("değer : %d\n",*ptr);

    free(ptr);   // Belleği serbest bırak !
    ptr = NULL;  // Güvenlik için NULL yapıldı


    return 0;
}