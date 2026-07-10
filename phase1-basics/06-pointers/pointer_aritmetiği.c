#include <stdio.h>

int main(){

    int dizi[5] = {11,22,33,44,55};
    int *ptr = dizi; // veya int *ptr = dizi;
    // pointer'a dizinin ilk elemanını doğru atamak önemli

    for(int i =0 ; i<5 ; i++){
        printf("%d. eleman : %d \n" , (i+1) , *(ptr+i) );
    }

    return 0;
}