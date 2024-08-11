#include<stdio.h>
int main()
{
	int N, sum=0,rem;
	printf("enter the number:");
	scanf("%d",&N);
	while(N>0)
	{
		rem=N%10;
		sum= sum+rem;
		N=N/10;
	}
	printf("\n Required sum=%d",sum);
	return 0;
}
