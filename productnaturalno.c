#include<stdio.h>
int main()
{
	int N, count, product=1;
	printf("enter value of N:");
	scanf("%d",&N);
	for (count=1;count<=N;count++)
	{
		product=product*count;
	}
	printf("\n required product=%d",product);
	return 0;
}
