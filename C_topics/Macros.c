#include<stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main()
{
    printf("What is bigger 5 or 6?  %i\n", MAX(5,6));
    printf("What is smaller 100 or 56 %i\n", MIN(56,100));
}