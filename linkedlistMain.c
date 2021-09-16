
        //code works properly
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int count=0;
struct node* head=NULL;
struct node*temp;
void insertNode(int data){
        struct node*temp;
        struct node* newNode=(struct node*)malloc(sizeof(struct node));
        printf("%d is added in linkedlist at index %d\n",data,count);
        newNode->data=data;
        newNode->next=NULL;
        count++;

    if (head==NULL)
    {
        head=temp=newNode; 
    }
    else
    {
        temp->next=newNode;
        temp=newNode;
    }
    
    
}

void deleteNode(){
    if (head==NULL)
    {
        printf("ELement can't be deleted due to underflow condition\n");
    }
    else if(count==1)
    {
        temp=head;
        free(temp);
        head=NULL;
        count--;
    }
    
    else
    {
        temp=head;
        for (int i = 1; i < count-1; i++)
        {
            temp=temp->next;
        }
        struct node*ptr=temp;
        ptr=temp->next;
        printf("%d is deleted from linked list from index %d\n",ptr->data,count-1);
        temp->next=NULL;
        free(ptr);
        count--;
    }  
}

void insertNodeAtIndex(int data,int index){
    
    if (index>count || index<0)
    {
        printf("Index is outof bound. %d cannot be added into the linkedlist\n",data);
    }
    else
    {
        struct node* newNode=(struct node*)malloc(sizeof(struct node));
        printf("%d is added in linkedlist at index %d\n",data,index);

        count++;
        newNode->data=data;

        if (index==0)
        {
            newNode->next=head;
            head=newNode;
        }
        else
        {
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
        }
    }
    
    
    
   
    
}

void deleteNodeAtIndex(int index){
    if ((head==NULL)|| index >= count)
    {
        printf("Element can't be deleted due unavailability of index %d\n",index);
    }
    
    else if (index==0)
    {   
        temp=head;
        printf("%d is deleted from the  linkedlist of index %d\n",temp->data,index);
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
        printf("%d is deleted from linked list from index %d\n",ptr->data,index);
        temp->next=ptr->next;
        free(ptr);
        count--;
        
    }
    
    
}
void deleteNodeUsingValue(int value){
    temp=head;
    int index=1;
    struct node* ptr=temp->next;
    if (temp->data==value)
    {
        printf("%d is deleted from the  linkedlist of index 0\n",temp->data);
        head=head->next;
        free(temp);
        count--;
        
    }
    else
    {       
            while (ptr->data!=value && ptr->next!=NULL)
        {
            
            temp=temp->next;
            ptr=ptr->next;
            index++;
            
        }
        if (ptr->data==value)
        {
            printf("%d is deleted from linked list from index %d\n",ptr->data,index);
            temp->next=ptr->next;
            free(ptr);
            count--;
        }  
        else
        {
            printf("%d is not in available in the linked list. Deletion failed\n",value);
        }
        
    }
    
    
    
    
   
    
}
void display(){
    temp=head;
    printf("The element in linkedlist are:\n");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    insertNode(6);
    insertNode(7);
    display();
    deleteNode();
    display();
    deleteNode();
    display();
    return 0;
}