#include<stdio.h>
void main()
{
	int a,b,c,d,sum;float avg;
	printf("enter the 1st mark");
	scanf("%d",&a);
	printf("enter the 2nd mark:");
	scanf("%d",&b);
	printf("enter the 3rd mark:");
	scanf("%d",&c);
	printf("enter the 4th mark:");
	scanf("%d",&d);
	sum=a+b+c+d;
	avg=(sum)/4;
	printf("sum is%d \n",sum);
 	printf("avg is%f \n",avg);
}

