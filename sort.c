#include<stdio.h>       
int *sort(int arr[],int size);
int main(int argc, char const *argv[])
{   int size,arr[50],*sho;
    printf("Enter the size of array");
    scanf("%d",&size);
    for (int i = 1; i <= size; i++)
    {
        printf("Enter the elements %d of array ",i);
        scanf("%d",&arr[i-1]);
    }
    sort(arr,size);
    printf("The sorted array is ");
    for (int i = 0; i < size; i++)
    {
          printf("%d ",arr[i]);
  
    }
    

    return 0;
}
int *sort(int arr[],int size ){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    return arr;
}
