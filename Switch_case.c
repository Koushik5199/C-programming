/* Switch Case Program */


#include <stdio.h>
int main ()
{

char grade;


printf(" \n choose  grade ");
scanf("%c",&grade);

switch (grade)
{
    case 'A' :
        printf("Excellent your marks are between 90 to 100");
        break;
    case 'B':
        printf("Good your marks are between 60 to 80");
        break;
    case 'c':
        printf("Failure");
        break;
    default :
        printf("invalid Grade");
}

return 0;
    
}