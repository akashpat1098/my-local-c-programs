#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *createRecursively()
{
    struct node *newNode;
    int x;
    newNode = (struct node *)malloc(sizeof(struct node)); //intializing the node
    printf("Enter the Data for Node(or -1 for no node)\n");
    scanf("%d", &x); //asking for data for node
    if (x == -1)
    {
        return 0; //checking if user want to create node
    }
    newNode->data = x; //setting value to data of node
    printf("Enter the data for Left Node of %d\n", x);
    newNode->left = createRecursively();
    printf("Enter the data for Right Node of %d\n", x);
    newNode->right = createRecursively();
    return newNode;
}
struct node *createNode(int key){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = key; //setting value to data of node
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void inOrder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void preOrder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        inOrder(root->left);
        inOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        inOrder(root->right);
        printf("%d ", root->data);
    }
}
void searchRecursively(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("Element not Found\n");
    }
    else if (root->data == key)
    {
        printf("Element Found %d\n",root->data);
    }
    else if (key>root->data)
    {
        searchRecursively(root->right, key);
    }
    
    else
    {
        searchRecursively(root->left, key);
    }
    
}
void searchIteratively(struct node *root, int key)
{
    struct node* temp=root;
    while(temp!=NULL){
        if (temp == NULL)
        {
            printf("Element %d not Found\n",key);
        }
        else if (key==temp->data)
        {
            printf("Element Found:%d\n",temp->data);
            return;
        }
        else if (key>temp->data)
        {
            temp=temp->right;
        }
        else
        {
            temp=temp->left;        
        }
    }
    
    
}
void insert(struct node *root,int key){
    struct node *prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if (key==root->data)
        {
            printf("Element %d is already present in BST\n",key);
            return;
        }
        else if (key<root->data)
        {
            root=root->left;
        }
        else 
        {
            root=root->right;
        }
    }
    struct node*new=(struct node *)malloc(sizeof(struct node));
    new->data=key; 
    new->left=NULL; 
    new->right=NULL; 
    if (key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }    
}
int checkBST(struct node* root){
    static struct node* prev=NULL;
    if (root!=NULL)
    {
        if (!checkBST(root->left))
        {
            return 0;
        }
        if (prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return checkBST(root->right);
            
    }
    else
    {
        return 1;
    }  
}
void isBST(struct node* root){
    if (checkBST(root)==1)
    {
        printf("It is BST\n");
    }
    else
    {
        printf("It is not BST\n");
    }
    
}
int main()
{
    struct node *root;
    // root = createRecursively();

    root=createNode(10);
    struct node *p1=createNode(5);
    struct node *p2=createNode(12);
    struct node *p11=createNode(2);
    struct node *p12=createNode(8);
    struct node *p21=createNode(11);
    struct node *p22=createNode(15);
        //     10
        //    /  \
        //   5    12
        //  / \  /  \  
        // 2  8 11  15
    root->left=p1;
    root->right=p2;
    p1->left=p11;
    p1->right=p12;
    p2->left=p21;
    p2->right=p22;
    
    printf("Element of tree in Inorder Form\n");
    inOrder(root);
    printf("\n");
    printf("Element of tree in Preorder Form\n");
    preOrder(root);
    printf("\n");
    printf("Element of tree in Postorder Form\n");
    postOrder(root);
    printf("\n");
    // isBST(root);
    insert(root,7);
    inOrder(root);
    printf("\n");
    if (checkBST(root)==1)
    {
        searchIteratively(root,7);  
    }
    else
    {
        printf("Search can't be done\n"); 
    }
    
    
    
    
    
    return 0;
}