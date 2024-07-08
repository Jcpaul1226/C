#include<stdio.h>


int main()
{
    int Iarray[] = {5,6,7,8,67,99};
    size_t size = sizeof(Iarray) / sizeof(Iarray[0]);  //size of returns total amount of memory, so divide by size of the first element.

    for (int i = 0; i < size; i++)
    {
        printf("%i, ",Iarray[i]);
    }
    


}