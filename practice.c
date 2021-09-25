#include<stdio.h>
#include<stdlib.h>


// void func(int *a){
//     a=(int*)malloc(sizeof(int));
//     printf("Enter a.it is in a function ");
//     scanf("%d",a);
// }

int* func1(int*ptr){
    int* ptr2;
    int a=4;
    ptr2=&a;
    ptr=(int *)malloc(sizeof(int));
    ptr=ptr2;
    return ptr;
}


int main()
 {
    // int num, *arr, i;
    // scanf("%d", &num);
    // arr = (int*) malloc(num * sizeof(int));
    // for(i = 0; i < num; i++) {
    // scanf("%d", arr + i);
    // }
    // int temp;
    // for (int i=0; i<num/2; i++) {
    //     temp=arr[i];
    // arr[i]=arr[num-i-1];
    // arr[num-i-1]=temp;
    // // *(arr+i)=*(arr+(num-i-1));
    // }
    // /* Write the logic to reverse the array. */

    // for(i = 0; i < num; i++)
    //     printf("%d ", *(arr + i));
//*************************************************



    //  char a[10];
    //  printf("ENter:");
    // fgets(a,10,stdin);
    // fputs(a,stdout);


    // char s[10];
    // printf("Eneter the string\n");
    //  scanf("%[^\n]%*c", s);
    //  printf("%s",s);

    // int* ptr=NULL,*test;
    // ptr=func1(ptr);
    // test=ptr;
    // printf("value in test %d\n",*test);



    //*******************************************************
//     int *a,*b;
// //  func(a);

//     printf("Enter a.it is in a function ");
//     scanf("%d",a);
    
//     printf("%d\n",*a);


//     b=(int*)malloc(sizeof(int));
//     printf("enter b.it is in a main function ");
//     scanf("%d",b);
//     printf("%d\n",*b);
//*************************************************************************
//     int a[2][3]={{1,2,3},{4,5,6}};
//     int*p=&a[0][0];
//     scanf("%d",p);
//     printf("%d",*p);
    // printf("%d\n",a);
    // printf("%d\n",&a);
    // printf("%d\n",&a[0][0]);
    // printf("%d\n",*a);
    // printf("%d\n",a[0]);
    // printf("%d\n",&a[0]);
    // printf("%d\n",**a);
    // printf("%d\n",a[0][0]);
    // printf("%d\n\n",*a[0]);

    // printf("%d\n",a+1);
    // printf("%d\n",&a+1);
    // printf("%d\n",&a[0][0]+1);
    // printf("%d\n",*a+1);
    // printf("%d\n",a[0]+1);
    // printf("%d\n",&a[0]+1);
    
    // printf("%d\n",**a+1);
    // printf("%d\n",a[0][0]+1);
    // printf("%d\n",*a[0]+1);












    // int a[5]={1,2,3,4,5};
    // int*p=a;
    // printf("%d\n",*a);//value at 1st position
    // printf("%d\n",a[0]);//value at 1st position
    // printf("%d\n",&a);//address of 1st position
    // printf("%d\n\n",a);//address of 1st position

    // printf("%d\n",a+1);//address of 2st position
    // printf("%d\n",*(a+1));//value of 2st position
    // printf("%d\n",p+1);//address of 2st position
    // printf("%d\n\n",*(p+1));//value of 2st position

    // printf("%d\n",&a+1);//address of 1st position
    // printf("%d\n",*a+5);//value after adding 
    // printf("%d\n",&p+1);//address of 1st position
    // printf("%d\n\n",*p+5);//value after adding

    

    // printf("%d\n",*p);//value of 1st position
    // printf("%d\n",p[0]);//value of 1st position
    // printf("%d\n",p);//address of 1st position
    // printf("%d\n",&p);//address of 1st position

    return 0;
}
