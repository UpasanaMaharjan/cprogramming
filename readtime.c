#include<stdio.h>
int main()
{
	int sec, hour, min, second;
	printf ("enter second:");
	scanf("%d",&sec);
	second=9750;
	hour=second/3600;
	second=sec%3600;
	min=second/60;
	sec=second%60;
	printf("\n %d hr %d min and %d sec",hour,min,sec);
	return 0;
}
