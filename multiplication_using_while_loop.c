/* multiplication using while loop */

#include<stdio.h>
int main ()
{
    int num,i,result;
    i=1;
    printf("Enter the input : \n ");
    scanf("%d",&num);
    
    while(i<=20)
    {
        result = num*i;
        printf("%d * %d = %d \n ",num,i,result);
        i++;
      
    }
    
return 0;
}
