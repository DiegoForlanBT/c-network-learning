#include <stdio.h>

#define port 8080 
#define ip_yazdir(ip) printf("ip addresiniz: %s\n", ip)
#define debug_modu

int main (){

     printf("Sunucu %d portundan başlatılıyor...\n", port);
     ip_yazdir("192.168.1.1");

     #ifdef debug_modu
        printf("[DEBUG] sistem logları açık, her şey yolunda.");
     #endif


    return 0;
}