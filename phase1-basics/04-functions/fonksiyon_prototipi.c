#include <stdio.h>

// Prototip - fonksiyon aşağıda tanımlı ama önceden haber veriyoruz

int kare(int x);

int main(){

    printf("5'in karesi : %d" , kare(5));

    return 0 ;
}

int kare(int x){
    return x*x ;
}