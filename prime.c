#include<stdio.h>
int main()
{
	int i,N;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for (i=2;i<=N;i++)
	{
		if(N%i==0)
		{
			break ;
		}
	}
		if (N==i)
		{
			printf("\n %d is prime",N);
		}
			else
			{
				printf("\n %d is not prime",N);
	     }
	return 0 ;
}
