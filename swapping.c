/* C PROGRAMME TO SWAP TWO GIVEN NUMBERS WITHOUT USING THIRD/TEMPORARY VARIABLE */

#include<stdio.h>
int main()
{
int a,b;

/* ASK THE USER TO ENTER ANY TWO NUMBERS */
printf("ENTER ANY TWO NUMBERS:");
scanf("%d %d",&a,&b);
printf("BEFORE SWAPPING THE TWO NUMBERS WERE A=%d and B=%d\n",a,b);

/* LOGIC BEHIND SWAPPING THE TWO NUMBERS */
a=a+b;
b=a-b;
a=a-b;

/* PRINTING THE DESIRED OUTPUT */
printf("AFTER SWAPPING THE TWO NUMBERS ARE A=%d and B=%d",a,b);
return 0;
}
