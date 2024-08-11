#include<stdio.h>
int main()
{
	int choice;
	printf("enter the choice(1-4):");
	scanf("%d",&choice);
	if (choice==1)
	printf("\n you are using Yahoo");
	else if(choice==2)
	printf("\n you are using Hotmail");
	else if (choice==3)
	printf("\n You are using Facebook");
	else if(choice==4)
	printf("\n You are using Tiktok");
	else printf("\n Invalid choice");
	return 0;

}
