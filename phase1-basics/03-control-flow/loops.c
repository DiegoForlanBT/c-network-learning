#include <stdio.h>

int main(){


    // for
    for(int i = 1 ; i <=5 ; i++){
        printf("%d " , i);
    }

    printf("\n");

    // while



    int i = 1 ;
    while(i<=5){
        printf("%d " , i);
        i++;
    }
    printf("\n");


    // do while

    int a = 1 ;
    do{
        printf("%d " , a);
        a++ ;
    }
    while(a<=5);


    return 0 ;
}