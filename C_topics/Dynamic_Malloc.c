#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct employee_t
{
    int income;
    int id;
    bool staff;
};

int init_employee(struct employee_t *e)
{
    static int num_employee = 0;        //Initialize a variable that can be seen globally but only accessed locally
    num_employee++;                 //Everytime an employee is initialized, increase number of employees
    int income = 0;
    int id = num_employee;
    bool staff = 0;
    return num_employee;
}


int main()
{
    int n = 4;

    struct employee_t *employees = malloc(sizeof(struct employee_t)*n); //allocate enough memory for how many structs you have
    if (employees == NULL)      //If employees is pointing to null, there is no memory allocated to it
    {
        printf("The allocator failed\n");
        return -1;
    }
    for(int i = 0;i<n;i++)
    {
    int id = init_employee(&employees[i]);
    printf("A new employee is made, the ID is: %d\n",id);
    }

    free(employees);        //Make sure to free the memory after
    employees==NULL;        //Make sure to make the pointer point to NUll to avoid bugs



}