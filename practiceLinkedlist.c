//linked list code works properly

#include<stdio.h>
#include<stdlib.h>
//count for counting  no of element ,declared globally
int count=0;
//creating structure
struct node
{
    int data;
    struct node *next;
};
//use this only one time 
//creating a linkedlist
struct node* createlinkedlist(struct node* head){
    struct node *newNode,*temp=NULL;
    int index=1; 
    int n=1;
                                      
    while (n)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        count++;

        printf("%d node is created\n",count); 

        printf("Enter the element %d\n",index);
        scanf("%d",&newNode->data); 
        newNode->next=NULL;                 //it is most necessary step otherwise code behave wrongly
       
       
        if (head==NULL)
        {
            head=temp=newNode;
            
         
        }
        else{
            temp->next=newNode;          
            temp=newNode;
           
        }

        printf("enter 1 to continue or 0 for break\n");
        scanf("%d",&n);
        while(n<0 || n>1)
        {
            printf("Enter the valid input->0 or 1\n");
            scanf("%d",&n);

        }
        
        printf("\n");
        index++;
    }
    
    return head;
}

//use this to print the linked list
// traversing/printing through Linkedlist
struct node* traversingLinkedlist(struct node* head){
     struct node *mytemp=NULL;
      //traversing through the nodes for printing
    mytemp=head; //again intializing same pointer to first node
    printf("Element are:");
    while (mytemp!=NULL)//NOTE:for traversing use myTemp only otherwise last data will not be printed
                        //but during insertion use myTemp->next only otherwise prblm in insertion of last node
    {
        printf("%d ",mytemp->data);
        mytemp=mytemp->next;
        
    }
    
        return head;
}
// inserting a element at first
struct node*insertNodeAtFirst(struct node* head){
    int data;
    printf("\n\nAdding element at first.....\n");
    printf("Enter the  number for first Node\n");
    scanf("%d",&data); 

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    count++;

    newNode->next=head;
    head=newNode;
    return head;
}
// inserting a element at last
struct node* insertNodeAtLast(struct node* head){
    int data;
    printf("\n\nAdding element at last.....\n");
    printf("Enter the  number for last Node\n");
    scanf("%d",&data); 

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    struct node*temp=head;
    count++;
    
    newNode->next=NULL;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
// inserting a element at index
//this function cannot works on first element but can works on last element
struct node* insertNodeAtIndex(struct node* head){
    int data,index;
    printf("\n\nAdding element at index.....\n");
    printf("Enter the  number for add at index\n");
    scanf("%d",&data); 
    printf("Enter the index to add that number\n");
    scanf("%d",&index);
    printf("count:%d\n",count);
    while (index>count+1 || index<=0)
    {
        if (index==0)
        {
            printf("Element cannot be added at first by indexing\n");
        }
        
        printf("Enter the valid index\n");
        scanf("%d",&index);       
    }
    

    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    count++;
    newNode->data=data;
    struct node*temp=head;
    int i=0;
    
    newNode->next=NULL;
    while (i!=index-1)
    {
       temp=temp->next;
       i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}


int main()
{
    struct node *head=NULL;
    int data;
    head=createlinkedlist(head);
    printf("Before Insertion\n");
    head=traversingLinkedlist(head);

    
    head=insertNodeAtFirst(head);
    printf("After Insertion at first\n");
    head=traversingLinkedlist(head);

   
    head=insertNodeAtFirst(head);
    printf("After Insertion at first\n");
    head=traversingLinkedlist(head);


    head=insertNodeAtLast(head);
    printf("After Insertion at last\n");
    head=traversingLinkedlist(head);

     
    head=insertNodeAtIndex(head);
    printf("After Insertion at index\n");
    head=traversingLinkedlist(head);
    return 0;
}