#include<stdio.h>
int main()
{
	int days,y,m,ds,rdays;
	printf("enter no. of days");
	scanf("%d",&days);
	 y= days/365;
	 rdays=days%365;
	 m=rdays/30;
	 ds=rdays%30;
	 printf("\n%dyear %dmonth and%d days",y,m,ds);
	 return 0;
}
