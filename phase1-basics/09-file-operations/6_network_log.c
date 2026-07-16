#include <stdio.h>
#include <time.h>

void log_yazdir(char *mesaj){
    FILE *log = fopen("network.log" , "a");
    if(log == NULL) return ;
    
    fprintf(log, "[LOG] %s\n" , mesaj);
    fclose(log);
}

int main(){

    log_yazdir("Baglanti kuruldu.");
    log_yazdir("Veri alindi");
    log_yazdir("Baglanti kapatildi");

    printf("loglar yazildi");
    return 0 ;
}