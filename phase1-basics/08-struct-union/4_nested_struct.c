#include <stdio.h>
#include <string.h>

typedef struct{
    int day;
    int month;
    int year;
}Date;

typedef struct{
    char name[50];
    int age;
    Date date_of_birth; 
}Person;

int main(){

    Person engineer;
    strcpy(engineer.name , "Barış TAŞKIRAN");
    engineer.age = 24 ;
    engineer.date_of_birth.day = 4 ;
    engineer.date_of_birth.month = 10 ;
    engineer.date_of_birth.year = 2001 ;

    printf("name: %s \n" , engineer.name);
    printf("age: %d\n", engineer.age);
    printf("date of birth: %d-%d-%d", 
    engineer.date_of_birth.day, engineer.date_of_birth.month, engineer.date_of_birth.year);




    return 0;
}