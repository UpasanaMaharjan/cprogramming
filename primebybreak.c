#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==n)
	{
		printf("\n %d is prime",n);
	}
	else
	{
		printf("\n %d is not prime",n);
	}
	return 0;
}
