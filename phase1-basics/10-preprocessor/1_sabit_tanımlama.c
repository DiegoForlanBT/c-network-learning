#include <stdio.h>
// Kodun içinde her yere aynı sayıyı yazmak yerine bir sabit tanımlarsın. 
// Derleyici çalışmadan önce önişlemci kodu tarar ve o kelimeyi gördüğü yere sayıyı yapıştırır.
#define pi 3.14 
#define max_buffer 1024

int main(){

    printf("pi: %.2f\n",pi);
    printf("Maksimum buffer boyutu: %d\n", max_buffer);
    return 0;

}