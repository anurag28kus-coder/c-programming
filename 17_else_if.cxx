#include    <stdio.h>

int main() {
    int marks = 75;
    
    if (marks >= 80 ){
        printf("Excellent");
    } else if ( marks >= 60){
        printf("Good");
    } else if ( marks >= 40){
        printf("Pass");
    } else {
        printf("Fail");
    }
    
    return 0;
}