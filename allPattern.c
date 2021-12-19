#include<stdio.h>
void triangular_star_pattern(int);
void reversed_triangular_star_pattern(int);
// yaha pe right triangular star pattern bhi pront hota h bs 2 space saat mai print karna h
void pyramidal_star_pattern(int); 
void numerical_pyramid(int);
void alphabetical_pyramid(int);
void reversed_pyramidal_star_pattern(int);
void diamond_star_pattern(int);
int main(int argc, char const *argv[])
{
    int pattern_no, rows;
    printf("Enter - 1 - Triangular star pattern\n");
    printf("Enter - 2 - Reversed triangular star pattern\n");
    printf("Enter - 3 - Pyramidal_star_pattern\n");
    printf("Enter - 4 - Numerical Pyramid\n");
    printf("Enter - 5 - Reversed_Pyramidal_star_pattern\n");
    printf("Enter - 6 - Diamond_star_pattern\n");
    printf("Enter - 7 - Alphabetical Pyramid\n");
    printf("Enter - 0 - For all Pattern\n");

    printf("Enter the respective number for type of star pattern:");
    scanf("%d",&pattern_no);

    switch (pattern_no)
    {
    case 1:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        triangular_star_pattern(rows);
        break;
    case 2:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        reversed_triangular_star_pattern(rows);
        break;
    case 3:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        pyramidal_star_pattern(rows);
        break;
    case 4:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        numerical_pyramid(rows);
        break;
    case 5:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        reversed_pyramidal_star_pattern(rows);
        break;
    case 6:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        diamond_star_pattern(rows);
        break;
    case 7:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        alphabetical_pyramid(rows);
        break;
    case 0:
        printf("Enter the no of rows:");
        scanf("%d",&rows);
        printf("TRIANGULAR STAR PATTERN :\n");
         triangular_star_pattern(rows);
        printf("REVERSED TRIANGULAR STAR PATTERN :\n");
         reversed_triangular_star_pattern(rows);
        printf("PYRAMIDAL STAR PATTERN :\n");
         pyramidal_star_pattern(rows);
        printf("NUMERICAL PYRAMID :\n");
         numerical_pyramid(rows);
        printf("REVERSED PYRAMIDAL STAR PATTERN :\n");
         reversed_pyramidal_star_pattern(rows);
        printf("DIAMOND STAR PATTERN :\n");
         diamond_star_pattern(rows);
        printf("ALPHABETICAL PYRAMID\n");
         alphabetical_pyramid(rows);


        break;
    
    default:
        printf("Enter the valid pattern_no");
        break;
    }

    return 0;
}

void triangular_star_pattern(int rows){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*"); 
        }
        printf("\n");
     }
    
}
void reversed_triangular_star_pattern(int rows){
    for (int i = 1; i <=rows; i++)
    {   
        for (int j = 0; j <=rows-i ; j++)
        {
            printf("*");
            
        }
        printf("\n");

        
    }
    
}
void pyramidal_star_pattern(int rows){
    for (int i = 1; i <=rows; i++)
    {   
        for (int j = 1; j <=rows-i ; j++)
        {
            printf(" "); //replace with double space to print right triangular star pattern
        }
     
        for (int j = 1; j <=i; j++)
        {
            printf("* "); 
        }
        printf("\n");
     }
    
     
    
}
void numerical_pyramid(int rows){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
           printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        for (int j = i-1; j >=1; j--)
        {
           printf("%d",j);
        }
        printf("\n");
        
    }
    
}
void reversed_pyramidal_star_pattern(int rows){
    for (int i = 1; i <=rows; i++)
    {   
        for (int j = 1; j <= i-1 ; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <=rows-i; j++)
        {
            printf("*"); 
            printf(" ");
        }
        printf("\n");
     
        
    }
        
    
}
void diamond_star_pattern(int rows){
    for (int i = 1; i <=rows; i++)
    {   
        for (int j = 1; j <=rows-i ; j++)
        {
            printf(" ");
        }
     
        for (int j = 1; j <=i; j++)
        {
            printf("*"); 
            printf(" ");
        }
        printf("\n");
     }
     for (int i = 1; i < rows; i++)
     {
         for (int j = 1; j <= i ; j++)
        {
            printf(" "); 
        }
        for (int j = 1; j <= rows-i; j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
       
     }
     
    
}
void alphabetical_pyramid(int rows){
    for (int i = 1, k=1 ; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
           printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c",(char)(64 + k));
            printf(" ");
            k++;
        }
        
        printf("\n");
        
    }
}




