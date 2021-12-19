#include<stdio.h>
int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
            
        }
        
    }
    return -1;
    
}
int recursiveLinearSearch(int arr[],int size,int index, int element){
    if (arr[index]==element)
    {
        return index;
        
    }
    else
    {
        recursiveLinearSearch(arr,size,index + 1,element);
    }
    
}
int binarySearch(int arr[],int size,int element){
    int low=0,mid,high=size-1;
   while (low<=high)
   {
    mid=(low+high)/2;     // remember to add this statement in while loop not outside
    if (arr[mid]==element)
    {
        return mid;
    }
    if (arr[mid]<element)
    {
        low=mid+1;//low is increasing 
    }                                                             
    else if(arr[mid]>element){
        high=mid-1; //high is decreasing
    }
   }
   return -1;   
}
int recursiveBinarySearch(int arr[],int size,int element){

}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,14,15,16,17,18,19,20,21,22,23,24,25,26,
            27,28,29,30,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,
            60,61,62,63,64,65,66,67,68,69,70};
    int size=sizeof(a)/sizeof(int);
    int element=26;
    int binarySearchIndex=binarySearch(a,size,element);
    printf("The element %d is found at index %d by binarySearch\n",element,binarySearchIndex);
    // int linearSearchIndex=linearSearch(a,size,element);
    // printf("The element %d is found at index %d by linearSearch\n",element,linearSearchIndex);
    // int recursiveLinearSearchIndex=recursiveLinearSearch(a,size,0,element);
    // printf("The element %d is found at index %d by recursiveLinearSearch\n",element,linearSearchIndex);
    
    
    
    
    
    return 0;
}