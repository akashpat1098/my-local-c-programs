#include<stdio.h>

int main()
{
    const int P=1000;
    const float g=9.81;
    float length,width,Area,height,volume;
    int pressure,weight;
    printf("Enter the length of tank\n");
    scanf("%f",&length);
    printf("Enter the width of tank\n");
    scanf("%f",&width);
    printf("Enter the height of tank\n");
    scanf("%f",&height);
    printf("Enter the Volume of tank\n");
    scanf("%f",&volume);
    Area=length*width;
    pressure=P*g*Area*height;
    weight=P*g*volume;
    printf("The Pressure at bottom is: %d N\n",pressure);
    printf("The Weight of water in tank is: %d N\n",weight);
    if (weight<pressure)
    {
        printf("It is Hydrostatic Pradox\n");
    }
    else{
        printf("It is not Hydrostatic Pradox\n");
    }
    
    return 0;
}