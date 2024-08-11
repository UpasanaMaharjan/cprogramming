#include<stdio.h>
int main()
{
	int x,y,count,product;
	printf("enter value of x and y:");
	scanf("%d%d",&x,&y);
	for (count=1;count<=y;count++)
	{
		product=product*x;
	}
	printf("required value=%d",product);
	return 0;
}
