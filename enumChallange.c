// This is an enum challange from the C programming course on Udemy.
// This program prints "My gender is 0" 
// to the console.

#include <stdio.h>

int main(){
    
    enum gender {male = 0, female};

    enum gender myGender;

    myGender = male;

    printf("My gender is... %d\n", myGender);

    return 0;
}