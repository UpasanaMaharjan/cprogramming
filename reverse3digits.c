#include<stdio.h>
int main()
{
	int num, r1, r2, r3;
	printf("enter 3 digit number:");
	scanf("%d",&num);
	r1=num%10;
	num=num/10;
	r2=num%10;
	num=num/10;
	r3=num%10;
	printf("reverse =%d%d%d",r1,r2,r3);
	return 0;
}

