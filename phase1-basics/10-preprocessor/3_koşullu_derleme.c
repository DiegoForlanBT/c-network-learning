#include <stdio.h>

#define WINDOWS_KULLANICI // Bunu silersen Linux kısmı çalışır

int main() {
    #ifdef WINDOWS_KULLANICI
        printf("Windows sistemine ozel kodlar calisiyor...\n");
        // #include <winsock2.h> gibi
    #else
        printf("Linux sistemine ozel kodlar calisiyor...\n");
        // #include <sys/socket.h> gibi
    #endif

    return 0;
}