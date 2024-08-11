#include<stdio.h>
intmain()
{
	int N,i,sum;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;i=i+2)
	{
		sum=sum+i;
	}
	printf("\n Required sum is%d",sum);
	return 0;
}
