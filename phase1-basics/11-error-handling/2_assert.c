//Kodun içinde "Bunun kesinlikle böyle olması lazım, yoksa program devam etmesin" dediğin
//yerlere koyarsın. Genellikle geliştirme (debugging) aşamasında kullanılır.
#include <stdio.h>
#include <assert.h>
void yas_kontrol(int yas)
{
    //Yaş 0'dan küçük olamaz. Olursa programı anında durdur. (abort)
    assert(yas >= 0);
    printf("yas: %d",yas);
}

int main()
{
    yas_kontrol(24);
    printf("\nbu kod calisacak !!!");
    // Aşağıdaki satır assert hatası verecek ve programı durduracaktır.
    // yas_kontrol(-5);
    
    return 0;
}