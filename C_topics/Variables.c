#include<stdio.h>

int num = 10;// this num is global to the whole program.

int main()
{
   printf("The global num is %d\n",num);

int num = 5;                          //this num is local to the main function
for (int i = 0; i< 4; i++)
    {
        int num = 0 + i;              //this num is local to this for loop
        printf("%d, ",num);
    }

    printf("\n THe main num is %d",num);
}
