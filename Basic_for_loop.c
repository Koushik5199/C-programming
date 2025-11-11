/* concept of the for loop
Every loop consists of 3 parts :
1. Initialization
2. Condition
3. Increment or updation

Syntax : for (initialization;Condition; updation);
Condition is checked everytime before the loop starts.
*/

#include<stdio.h>
int main ()
{
    int n =100;
    int i;
    
    for(i=0;i<=n;i++)
    {
        printf(" the value of i is %d \n", i);
    }

return 0;
}

