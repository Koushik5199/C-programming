/*
Write a program to use if and else conditions in C
*/

#include <stdio.h>
int main () 
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    if (num < 100)
    {
        printf("In if block");
    }
    
    else if (num ==100) 
    {
     printf("The number is 100");    
    }
    
    else
    {
        printf("In else block");    
    }
    
    return 0;
}