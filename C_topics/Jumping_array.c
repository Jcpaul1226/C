#include<stdio.h>


int jump(int x[])
{
    static int jumps = 0;
    int largest = 0;
    size_t size = sizeof(x)/sizeof(x[0]);
    for (int i = 0; i < size; i++)
    {
        if (largest < x[i])
        largest = x[i];
        else largest = largest;
    }
    return largest;
    
}

int main()
{
    int arr[5]={1,7,4,8,9};
    int *aptr = &arr;
    int A = jump(aptr);
    printf("%d",A);
    return 0;
}