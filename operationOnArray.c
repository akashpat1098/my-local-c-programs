#include<stdio.h>
    int size;
    int arr[100];
void setArray(){
    printf("Enter the Size of Array\n");
    scanf("%d",&size);
    while (size>100||size<1)
    {
        printf("Invalid Input\n");
        printf("The size should be less than equal to 100 or greater than equal to 1\n");
        scanf("%d",&size);   
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    
}
void displayArray(){
    printf("The element in array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(){
    int replaceValue,position;
    printf("Enter the insertion Value\n");
    scanf("%d",&replaceValue);

    printf("Enter the position of replacement\n");
    scanf("%d",&position);

    if (position>size||position<1)
    {
        printf("Insertion fail due to wrong value of position\n");
    }
    else{
        for (int i = size-1; i >= position-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=replaceValue;
    size++;
    }
    
    
}
void deletion(){
    int position;
    printf("Enter the position of element for deletion\n");
    scanf("%d",&position);
    if (position>size||position<1)
    {
        printf("Insertion fail due to wrong value of position\n");
    }
    else{
        for (int i = position-1; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    }
    
}
int main()
{
    setArray();
    printf("The element of array are\n");
    displayArray();

    deletion();
    printf("After Deletion\n");
    displayArray();

    insertion();
    printf("After Insertion\n");
    displayArray();

    insertion();
    printf("After Insertion\n");
    displayArray();


    return 0;
}