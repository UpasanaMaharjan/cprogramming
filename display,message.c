#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("\n%d is divisible by 5", num);
	}
	return 0;
}
