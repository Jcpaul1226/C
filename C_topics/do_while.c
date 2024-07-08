#include <stdio.h>
#include<string.h>

int main()
{
    char c[4];
    char check[4] = "yes";
    do
    {
        printf("This code will run first, and continue if you type yes");
        scanf("%3s",c);                                //input size of string to prevent overflow
        int test = strcmp(check,c);                    //strcmp = 0 when equal.     
        printf("The result of C and Check is =%d",test);

    } while (strcmp(check,c) == 0);                   //Cant use != or == for strings it will compare address
    
}