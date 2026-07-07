#include <stdio.h>

int main(){

//1- dizi tanımlama
int sayilar[5] = {15,28,74,99,126};

//2-Elemanlara erişim
printf("2. eleman : %d\n",sayilar[1]);
printf("5. eleman : %d\n",sayilar[4]);

//3-Döngülerle yazdırma
for(int i = 0 ; i<5 ; i++){
    printf("sayilar[%d] = %d\n" , i , sayilar[i]);
}

return 0;
}