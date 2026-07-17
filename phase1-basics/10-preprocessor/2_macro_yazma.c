#include <stdio.h>

#define kare_al(x)   ((x)*(x))
#define max_bul(a,b)   ((a)>(b) ? (a):(b))

int main(){

    printf("9'un karesi: %d\n", kare_al(9));
    printf("Büyük olan: %d\n", max_bul(33,20));

    return 0;
}