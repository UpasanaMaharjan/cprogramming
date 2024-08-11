#include<stdio.h>
int main()
{
	int N, count=2;
	printf("enter value of N:");
	scanf("%d",&N);
	while(count<=N)
	{
		printf("%d\t",count);
		count=count+2;
	}
	return 0;
}
