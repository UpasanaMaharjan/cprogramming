#include<stdio.h>
int main()
{
	int count=1;
	while(count<=1024)
	{
		printf("%d,",count);
		count=count*2;
	}
	return 0;
}
