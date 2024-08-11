#include<stdio.h>
int main()
{
	int N,count,sum=0;
	printf("enter value of N:");
	scanf("%d",&N);
	for (count=1;count<=N;count++)
	{
		sum=sum+count;
	}
	printf("\n required sum =%d",sum);
	return 0;
}
