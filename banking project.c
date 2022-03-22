#include<stdio.h>
int main()
{
	float x,y;
	char ch;
	printf("enter initial amount \n");
	scanf("%f",&x);
	printf("press c for credit\n");
	printf("press d for debit \n");
	printf("press i for inquiry \n");
	scanf("\n%c",&ch);
	
	switch(ch)
	{
		case  'c':
		printf("enter amount to credit \n");
		scanf("%f",&y);
		if(x>=y)
		{
			x=x+y;
			printf("total amount = %f",x);
			break ;
			
			
		case 'd':
		printf("enter amount to debit \n");
		scanf("%f",&y);
		x=x-y;
		printf("total amount = %f",x);
		break ;
		
		
		case 'i':
		printf("total amount = %f",x);
		break ;
		
		
		default:
		printf("press right button");
		}
		else
		
		{
			printf("insufficient balence in your account!");
		}
	}
		
		
		
		
	

}
