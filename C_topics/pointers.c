#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>          //for memory allocation

struct employee_t
{
    int id;
    int income;
    bool staff;
};

void intialize_employee(struct employee_t *e)
{
e->id =0;
e->income =0;
e->staff=false;
return;
}


int main()
{
    int x = 3;          //compiler makes room on the stack for this variable
    int *ptr = &x;      //Stores the address of X on the stack into *ptr

    printf("%d", *ptr);     //*derefrences the pointer to get the value it is pointing to
    printf("%d\n", ptr);     //prints the address it is pointing to 

    struct  employee_t ralph;
    intialize_employee(&ralph);
    printf("%d\n", ralph.income);
    ralph.id = 1;
    ralph.income = 15;
    printf("%d", ralph.income);

    

}