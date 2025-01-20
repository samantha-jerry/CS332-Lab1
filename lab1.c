#include <stdio.h>
#include <stdbool.h>

int isOdd(int given_number){
    if(given_number%2 != 0)
        printf("The number is an odd number."); 
    else
        printf("The number is an even number.");
    return 0;
}
void main(){
    int given_number;
    printf("Enter a number: " );
    scanf("%d", &given_number);
    isOdd(given_number);
}