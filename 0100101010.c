#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2==0)
			printf("0\t");
			else 
			printf("1\t");
		}
		printf("\n");
	}
	return 0;
}
