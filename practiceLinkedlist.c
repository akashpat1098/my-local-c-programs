//linked list code works properly

#include <stdio.h>
#include <stdlib.h>
//count for counting  no of element ,declared globally
//creating structure
struct node
{
    int data;
    struct node *next;
};
//intialising head globally
struct node *head;
int count = 0;

//use this only one time
//creating a linkedlist
struct node *createlinkedlist()
{
    struct node *newNode, *temp = NULL;
    int index = 1;
    int n = 1;

    while (n)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        count++;

        printf("%d node is created\n", count);

        printf("Enter the element %d\n", index);
        scanf("%d", &newNode->data);
        newNode->next = NULL; //it is most necessary step otherwise code behave wrongly

        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("enter 1 to continue or 0 for break\n");
        scanf("%d", &n);
        while (n < 0 || n > 1)
        {
            printf("Enter the valid input->0 or 1\n");
            scanf("%d", &n);
        }

        printf("\n");
        index++;
    }
}

//use this to print the linked list
// traversing/printing through Linkedlist
struct node *traversingLinkedlist()
{
    struct node *mytemp = NULL;
    //traversing through the nodes for printing
    mytemp = head; //again intializing same pointer to first node
    printf("Element are:");
    while (mytemp != NULL) //NOTE:for traversing use myTemp only otherwise last data will not be printed
                           //but during insertion use myTemp->next only otherwise prblm in insertion of last node
    {
        printf("%d ", mytemp->data);
        mytemp = mytemp->next;
    }
}
// inserting a element at first
struct node *insertNodeAtFirst()
{
    int data;
    printf("\n\nAdding element at first.....\n");
    printf("Enter the  number for first Node\n");
    scanf("%d", &data);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    count++;

    newNode->next = head;
    head = newNode;
}
// inserting a element at last
struct node *insertNodeAtLast()
{
    int data;
    printf("\n\nAdding element at last.....\n");
    printf("Enter the  number for last Node\n");
    scanf("%d", &data);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    struct node *temp = head;
    count++;

    newNode->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// inserting a element at index
//this function cannot works on first element but can works on last element
struct node *insertNodeAtIndex(int index)
{
    int data; 
    // int index;
    printf("\n\nAdding element at index.....\n");
    printf("Enter the  data to add at index\n");
    scanf("%d", &data);
    // printf("Enter the index Number\n");
    // scanf("%d", &index);
    // printf("No of element in linkedlist:%d\n", count);
    while (index > count + 1 || index <= 0)
    {
        if (index == 0)
        {
            printf("Element cannot be added at first by indexing\n");
        }

        printf("Enter the valid index\n");
        scanf("%d", &index);
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    count++;
    newNode->data = data;
    struct node *temp = head;
    int i = 0;

    newNode->next = NULL;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

struct node *deleteNodeAtFirst(){
    struct node *temp;
    temp=head;
    printf("\n\n%d is deleted from the  linkedlist of index 0\n",temp->data);
    head=head->next;
    free(temp);
    count--;
    
}
struct node *deleteNodeAtLast(){
    struct node *temp;
    temp=head;
    for (int i = 1; i < count-1; i++)
    {
        temp=temp->next;
    }
    struct node*ptr=temp;
    ptr=temp->next;
    printf("\n\n%d is deleted from linked list from index %d\n",ptr->data,count-1);
    temp->next=NULL;
    free(ptr);
    count--;
}
struct node *deleteNodeAtIndex(int index){
    struct node *temp;
    if ((head==NULL)|| index >= count)
    {
        printf("\n\nElement can't be deleted due unavailability of index %d\n",index);
    }
    
    else if (index==0)
    {   
        temp=head;
        printf("\n\n%d is deleted from the  linkedlist of index %d\n",temp->data,index);
        head=head->next;
        free(temp);
        count--;
    }
    else
    {
        temp=head;
        for (int i = 0; i < index-1; i++)
        {
            temp=temp->next;
        }
        struct node* ptr=temp->next; 
        printf("\n\n%d is deleted from linked list from index %d\n",ptr->data,index);
        temp->next=ptr->next;
        free(ptr);
        count--;
        
    }
}

int main()
{

    createlinkedlist();
    printf("Before Insertion\n");
    traversingLinkedlist();

    insertNodeAtFirst();
    printf("After Insertion at first\n");
    traversingLinkedlist();

    insertNodeAtFirst();
    printf("After Insertion at first\n");
    traversingLinkedlist();

    deleteNodeAtFirst();
    printf("After Deletion at first\n");
    traversingLinkedlist();

    deleteNodeAtFirst();
    printf("After Deletion at first\n");
    traversingLinkedlist();

    insertNodeAtLast();
    printf("After Insertion at last\n");
    traversingLinkedlist();

    deleteNodeAtLast();
    printf("After Deletion at last\n");
    traversingLinkedlist();


    insertNodeAtIndex(3);
    printf("After Insertion at index\n");
    traversingLinkedlist();

    deleteNodeAtIndex(3);
    printf("After Deletion at index\n");
    traversingLinkedlist();


    return 0;
}