#include<stdio.h>
int main()
{
	int N,count;
	printf("enter value of N:");
	scanf("%d",&N);
	for (count=1;count<=10;count++)
	{
		printf("%d*%d=%d",N, count,N*count);
	}
	return 0;
}
