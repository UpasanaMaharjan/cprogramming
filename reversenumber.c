#include<stdio.h>
int main()
{
	int N, rem, rev=0;
	printf("enter the number:");
	scanf("%d",&N);
	while(N>0)
	{
		rem=N%10;
		rev=rev*10+rem;
		N=N/10;
	}
	printf("\n reverse=%d",rev);
	return 0;
}
