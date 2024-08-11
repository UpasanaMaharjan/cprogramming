#include<stdio.h>
int main()
{
	int x, y, z;
	printf("enter 3 numbers x, y, z:");
	scanf("%d%d%d",&x, &y, &z);
	if (x>y&&x>z)
	{
		printf("\n%d is largest",x);
	}
	else if (y>x && y>z)
	{
		printf("\n%d is largest",y);
	}
	else
	{
	printf("\n%d is largest",z);
	}
	return 0;
}
