//code works properly but with graet effort of expirement
//this code has two main 
//in one all deatil are there and on another output detail are there like showing address 
//so  uncomment any one main only and use

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


int main()
{
    //creating a pointer for  1st node and pointing it to null 
    struct node *head=NULL; 
    //creating a pointer for poiniting to new node and temp pointer to traverse through linklist
    struct node *newNode,*mytemp=NULL; 
    //for counting no of nodes
    int count=0;
    //for intializing the loop
    int n=1;
                                      
    while (n)
    {
        newNode=(struct node*)malloc(sizeof(struct node)); //new node is created
        count++;//count is incremented

        printf("%d node is created\n",count); 

        newNode->data=0;
        newNode->next=NULL;   //intializing data of nodes to zero
                 //it is most necessary step otherwise code behave wrongly
        //linking the nodes and changing the temp pointer
        if (head==NULL)
        {
            head=mytemp=newNode;
         
        }
        else{
            mytemp->next=newNode;          
            mytemp=newNode;
            
        }
        //asking for continue of loop
        //for creating next new node
        printf("enter 1 to continue or 0 for break\n");
        scanf("%d",&n);
        printf("\n");
    }



  
    //taking value of data of each nodes
    mytemp=head; //pointing temp to first node
    // printf("Checking.....\nmytemp:%d\nhead:%d\n",mytemp,head);
    while (mytemp!=NULL)
    {
        printf("Enter the element\n");
        scanf("%d",&mytemp->data);
        // printf("Element created in this mytemp address:%d\n",mytemp);
        mytemp=mytemp->next;
        
    } 


    //traversing through the nodes for printing
    mytemp=head; //again intializing same pointer to first node
    printf("Element are:");
    while (mytemp!=NULL)//NOTE:for traversing use myTemp only otherwise last data will not be printed
                        //but during insertion use myTemo->next only otherwise 
    {
        printf("%d ",mytemp->data);
        mytemp=mytemp->next;
        
    }


   

       
    return 0;
}
//********************************************************************************
// int main()
// {
//     struct node *head; 
//     head=NULL;                                 
//      int count=0;  
//     struct node *newNode,*temp=NULL;
//     int n=1;
//     while (n)
//     {
//         newNode=(struct node*)malloc(sizeof(struct node));
//         count++;
//         printf("%d node is created\n",count); 

//         newNode->data=0;
//         newNode->next=NULL;         //it is most necessary step otherwise code behave wrongly
//         if (head==NULL)
//         {
//             head=temp=newNode;
//             printf("head/first node is created\n");
//             printf("head address:%d\n",head);

//         }
//         else{
//             temp->next=newNode;
//             printf("previous temp/head/previous node address/linked succesfull:%d\n",temp);          
//             temp=newNode;
//             printf("now temp addressing to next/new node:%d\n",temp);          
//             printf("temp->next address:%d\n",temp->next);
//         }
//     printf("enter 1 to continue or 0 for break\n");
//     scanf("%d",&n);
//     printf("\n");
//     }

//     //*************************************************************
//     // code for taking and printing values in linked list
//     //common for both
//     struct node *mytemp=NULL;
//     int index=1;
//     mytemp=head;
//     printf("Checking.....\nmytemp:%d\nhead:%d\n",mytemp,head);
//     while (mytemp!=NULL)
//     {
//         printf("Enter the element\n");
//         scanf("%d",&mytemp->data);
//         printf("Element created in this mytemp address:%d\n",mytemp);
//         printf("Element %d:%d\n",index,mytemp->data);
//         mytemp=mytemp->next;
//         index++;
//     }
    
    
//     free(newNode);      
  
//     return 0;
// }


