#include<stdio.h>


int main()
{

    char grade;
    printf("Please Enter a grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'a':
        printf("Perfect");
        break;
    case 'b':
        printf("great!");
        break;
    case 'c':
        printf("Okay");
        break;
    default:
        printf("Terrible");
        break;

    }
}