#include <stdio.h>

typedef struct {

    char model[20];
    int year ;
    float topSpeed;

}Araba;



int main (){

    Araba chevy ;
    chevy.year = 1996;
    chevy.topSpeed = 197.12;

    printf("year : %d\n" , chevy.year);
     printf("year : %.2f\n" , chevy.topSpeed);



    return 0;
}