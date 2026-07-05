#include <stdio.h>

int main(){

    int not = 90 ;

    if(not>90){
        printf("AA");
    }
    else if(90>=not && not>80){
        printf("BA");
    }
    else if(80>=not && not>70){
        printf("BB");
    }
    else if(70>=not && not>60){
        printf("CB");
    }
    else if(60>=not && not>50){
        printf("CC");
    }
    else{
        printf("FF");
    }

    return 0 ;
}

