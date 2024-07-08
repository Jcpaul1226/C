#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;                   //Value held by node in linked list
    struct node* next;          //Pointer to the next node in the list
};
typedef struct node node_t;     

void printlist(node_t *head)    //print a nodes value, then move on to the next node untill you get to NULL
{
    node_t *temporary =head;
    while(temporary != NULL)
    {
        printf("%d - ", temporary->data);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node(int data)           //creates a node of inserted value that points to NULL
{
    node_t *result =malloc(sizeof(node_t)); //Statically allocate memory for node
    result->data = data;
    result->next = NULL;
    return result;
}

//Creates a node, Make it point to the head of the list, and then make it the head of the list
node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head =node_to_insert;
    return node_to_insert;
}
//return a node if it equals the search value, if not go on to next node
node_t *find_node(node_t *head,int Data)
{
    node_t *tmp = head;
    while(tmp != NULL)
    {
        if(tmp->data == Data) return tmp;
        tmp = tmp->next;
    }
}

//create a node and make it point to whatever the node you want it to go after points to, then have the previous
//node point to the new node
void insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;

}

/*void insert_before_node(node_t *node_to_insert_before, node_t *newnode)
{
    newnode->next = node_to_insert_before;
}*/
int main()
{
    node_t *tmp;
    node_t *head = NULL;

for (int i = 0; i < 20; i++)
{
    
    tmp = create_new_node(i);
    head = insert_at_head(&head, tmp);
}
tmp = find_node(head,13);
printf("found node with value %d\n",tmp->data);
insert_after_node(tmp,create_new_node(75));
//insert_before_node(tmp,create_new_node(56));
printlist(head);



    
    

    

}