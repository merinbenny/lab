#include<stdio.h>
void main()
{
	float time;
	printf("enter time taken");
	scanf("%f",&time);
	if((time>=2)&&(time<3))
		printf("highly efficient");
	if((time>=3)&&(time<4))
		printf("improve youy speed");
	if((time>=4)&&(time<5))
		printf("worker is given training");
	if(time>5)
		printf("worker is terminated");
}
