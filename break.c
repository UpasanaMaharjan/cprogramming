#include<stdio.h>
int main()
{
int choice, num;
printf("1.check even or odd\n2.check positive, negative or zero");
printf("\n enter a number");
scanf("%d",&num);
printf("\n enter a choice(1-2):");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		if(num%2==0)
		printf("\n %d is even",num);
		else 
		printf("\n %d is odd",num);
		break;
		case 2:
			if(num>0)
			printf("\n%d is positive",num);
			else if (num<0)
			printf("%d is negative",num);
			else
			printf("\n zero");
			break;
			default:
				printf("\n Invalid choice");
			}
			return 0;
}

