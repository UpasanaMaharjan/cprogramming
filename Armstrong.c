#include<stdio.h>
int main()
{
	int n, sum=0,rem,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	printf("\n armstrong number");
	else
	printf("\n not armstrong");
	return 0;
}

