#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* create(){
    struct node* newNode;
    int x;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data for Node(or -1 for no node)\n");
    scanf("%d",&x);
    if (x==-1)
    {
        return 0;
    }
    newNode->data=x;
    printf("Enter the data for Left Node of %d\n",x);
    newNode->left=create();
    printf("Enter the data for Right Node of %d\n",x);
    newNode->right=create();
    return newNode;
}
int main()
{
    struct node* root;
    root=create();
    return 0;
}