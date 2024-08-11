#include<stdio.h>
int main()
{
	int n,first=0,second=1,next,i;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d\t%d",first,second);
	for(i=1;i<n-1;i++)
	{
		next=first+second;
		printf("\t%d",next);
		first=second;
		second=next;
	}
	return 0;
}
