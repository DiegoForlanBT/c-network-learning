#include <stdio.h>

typedef struct {
    char isim[50];
    int yas;

}Kisi;

int main(){

    Kisi kisi = {"Baris" , 24};
    // Yaz
    FILE *dosya = fopen("kisi.bin" , "wb");
    if(dosya==NULL) return 1;
    fwrite(&kisi, sizeof(Kisi) , 1 , dosya);
    fclose(dosya);

//fwrite(&k, sizeof(Kisi), 1, dosya);
//       |       |         |    |
//       |       |         |    └── hangi dosyaya
//       |       |         └── kaç adet yaz
//       |       └── her birinin boyutu
//       └── verinin adresi

    // OKU
    Kisi okunan;
    dosya = fopen("kisi.bin" , "rb");
    if(dosya == NULL)return 1;
    fread(&okunan , sizeof(Kisi) , 1 , dosya);
    fclose(dosya);

    printf("isim: %s\n" , okunan.isim);
    printf("yas: %d", okunan.yas);

    return 0;
}