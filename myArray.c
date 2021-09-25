#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int totalSize;
    int usedSize;
    int *ptr;
};
void createArray(struct myArray* a,int tSize,int uSize){
    a->totalSize=tSize;
    a->usedSize=uSize;
    a->ptr=(int*)malloc(tSize*sizeof(int));
}
 void insert(struct myArray* a){
     int n;
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("Enter the number %d ",i+1);
        scanf("%d",&n); 
        (a->ptr)[i]=n;
    }
    
}
void show(struct myArray* a){
    printf("The elements in array are:");
    for (int i = 0; i < a->usedSize; i++)
    {
        printf("%d ",(a->ptr)[i]);   
    }
    printf("\n");
}
void reverse(struct myArray* a){
    int temp;
    printf("Element after reversed");
    for (int i = 0; i < a->usedSize/2; i++)
    {
    temp=(a->ptr)[i];
    (a->ptr)[i]=(a->ptr)[a->usedSize-i-1];
    (a->ptr)[a->usedSize-i-1]=temp;
    // *(arr+i)=*(arr+(num-i-1));
    }
    printf("\n");
}
    

int main()
{
    struct myArray rollNo;
    // rollNo.totalSize=14;
    // printf("%d",rollNo.totalSize);
    createArray(&rollNo,10,5);
    insert(&rollNo);
    show(&rollNo);
    reverse(&rollNo);
    show(&rollNo);
    
    
    return 0;
}