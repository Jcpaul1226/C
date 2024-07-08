#include<stdio.h>

#define BIT(x,n) ((x)>>(n) & 0x1) //macro to see a bit
int set_bit(int X, int N); // function to set a bit
int clear_bit(int X, int N); //function to clear a bit
void display_bits(int X); //function to display a numbary in binary
int toggle_bit(int X, int N); // function to toggle a bit

int main()
{
    int x = 42;
    display_bits(x);
    printf("the third bit is %i \n",BIT(x,3));
    display_bits(set_bit(x,3));
    display_bits(clear_bit(x,3));
    display_bits(toggle_bit(x,3));
}

int set_bit(int X, int N)
{
    int temp = 0x1 << N;
    return X | temp;
}

int clear_bit(int X, int N)
{
    int temp = ~(0x1 << N);
    return X & temp;
}

int toggle_bit(int X, int N)
{
    int temp = 0x1 << N;
    return X ^ temp;
}

void display_bits(int X)
{
int bit_size = sizeof(X) * 8;
    for (int i = 0; i < bit_size; i++)
    {
        printf("%i",BIT(X,bit_size-1-i));
    }
    printf("\n");
}