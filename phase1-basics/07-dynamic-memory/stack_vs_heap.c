/*
BELLEK
├── Stack  → Otomatik, küçük, hızlı (normal değişkenler)
└── Heap   → Manuel, büyük, esnek (malloc ile)
*/

#include <stdio.h>
int main(){
    int x = 10 ; // Stack - otomatik silinir
    int*ptr = malloc(sizeof(int)); // Heap - sen sileceksin !
    return 0;
}