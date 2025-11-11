/* multiplication using for loop */

#include<stdio.h>
int main ()
{
    int num,i,result;
    i=0;
    printf("Enter the input : \n ");
    scanf("%d",&num);
    for(i; i<=20; i++)
    {
        result = num*i;
        printf("%d * %d = %d \n ",num,i,result);
    }
    
return 0;
}
