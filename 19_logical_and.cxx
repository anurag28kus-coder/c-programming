#include <stdio.h>

int main(){
    int marks = 80 ;
    int attendence = 75 ;
    
    if ( marks >= 40 && attendence >= 75){
        printf ("Eligible");
    } else {
         printf ("Not Eligible");
    }
    return 0;
}