#include <stdio.h>

int main()
{
int ready = 1;               //no booleans in C
while (ready == 1)
{
    printf("This code is repeated untill you input a number besides 1!");
     scanf("%d",&ready);           //Dont forget the %d, and the & for the variable
    
}
printf("Goodbye!");
}