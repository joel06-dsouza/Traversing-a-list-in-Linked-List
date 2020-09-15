#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          
    struct node *next; 
}*head;


/* 
 * Functions to create and display list
 */
void createList(int n);
void traverseList();


int main()
{
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in the list \n");
    traverseList();

    return 0;
}

/*
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode,*temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));


 
    printf("Enter the data: \n");
    scanf("%d", &data);

    head->data = data; 
    head->next = NULL; 

    
    temp = head;
   for(i=1; i<n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

       
     if(newNode == NULL)
  /*     {
            printf("Unable to allocate memory.");
            break;
        }

 */     printf("Enter the data ");
        scanf("%d", &data);

        newNode->data = data; 
        newNode->next = NULL; 

        temp->next = newNode; 
        temp = temp->next;    
    }
}


/*
 * Display entire list
 */
void traverseList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); 
        temp = temp->next;                 
    }
}


