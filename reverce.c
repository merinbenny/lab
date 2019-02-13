/*program to print reverce of a number
Merin Benny
date:13/02/19*/
#include<stdio.h>
void main()
{
	int number,reminder,reverce=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(number>0)
	{
		reminder=number%10;
		reverce=(reverce*10)+reminder;
		number=number/10;
	}
	printf("reverce  is %d",reverce);
}

