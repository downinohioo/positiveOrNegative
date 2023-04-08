#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int input = get_int("Input a number: ");
    if(input > 0) {
        printf("The number is positive\n");
    } else if(input < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is equal to 0\n");
    }
}    
