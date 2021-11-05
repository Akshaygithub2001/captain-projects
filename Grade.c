/* C programm to print grade of the student based on the input marks */

#include<stdio.h>
int main()
{
    int marks;
    
 /* getting the total marks from the user */    
    printf("Enter the total marks obtained: ");
    scanf("%d",&marks);
  
  /* logic behind printing the grades */    
    if(marks>100||marks<0)
    printf("INVALID INPUT");
    else if(marks>=85&&marks<=100)
    printf("GRADE A");
    else if(marks>=70&&marks<=84)
    printf("GRADE B");
    else if(marks>=55&&marks<=69)
    printf("GRADE C");
    else if(marks>=40&&marks<=54)
    printf("GRADE D");
    else printf("GRADE F");
    return 0;
}
