#include<stdio.h>

int choice,x,y,cont=1;
void add();
void sub();
void mult();
void div();

int main()
{
    
    do
    {
        printf("This is a Calculator, please enter a number 1-4.\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
        scanf("%d",&choice);

    //Addition
    if(choice == 1)
    {
        add();
    }

    //Subtraction
    else if (choice == 2)
    {
        sub();
    }
    
    //Multiplication
    else if (choice == 3)
    {
        mult();
    }

    //divison
    else if (choice == 4)
    {
       div();
    } 
    
    else if (choice == 5)
    printf("Goodbye!");

    else
    printf("Error! option not available.");

    } while (cont !=1);
}
    
 void add()
{
   printf("You chose Addition!\nWhat is your first number:");
    scanf("%d",&x);
    printf("What is your second number:");
    scanf("%d",&y);
    printf("The result of %d + %d = %d",x,y,x+y);
    printf("\nEnter 1 to exit:");
    scanf("%d",&cont); 
}

void sub()
{
    printf("You chose Subtraction!\nwhat is your first number:");
        scanf("%d",&x);
        printf("What is your second number:");
        scanf("%d",&y);
        printf("The result of %d - %d = %d",x,y,x-y);
        printf("\nEnter 1 to exit:");
        scanf("%d",&cont);
}

void mult()
{
    printf("You chose Multiplication!\nwhat is your first number:");
        scanf("%d",&x);
        printf("What is your second number:");
        scanf("%d",&y);
        printf("The result of %d * %d = %d",x,y,x*y);
        printf("\nEnter 1 to exit:");
        scanf("%d",&cont);
}

void div()
{
printf("You chose Division!\nwhat is your first number:");
        scanf("%d",&x);
        printf("What is your second number:");
        scanf("%d",&y);
        printf("The result of %d/%d = %d",x,y,x/y);
        printf("\nEnter 1 to exit:");
        scanf("%d",&cont);
}
    