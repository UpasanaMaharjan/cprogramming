#include<stdio.h>
int main()
{
	int n,rem,rev=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if (rev==temp)
	printf("\n palindrome number");
	else
	printf("\n not palindrome");
	return 0;
}
