#include<stdio.h>
int main()
{
	
	int choice,num,total=0,n,y,down,up;
	char ch;
	up:
	printf("\n1.pizaa   price = 180rs/pcs");
	printf("\n2.burger  price = 100rs/pcs");
	printf("\n3.dosa    price = 120rs/pcs");
	printf("\n4.itali   price = 50rs/pcs");
	printf("\nPlease enter your choice...:");
	scanf("%d",&choice);
	printf("\n");
	if(choice==1)
	{
	printf("You have to selected pizaa.");
    }
    else if(choice==2)
    {
    printf("You have to selected burger.\n");	
	}
	else if(choice==3)
    {
    printf("You have to selected dosa.\n");	
	}
	else if(choice==4)
    {
    printf("You have to selected itali.\n");	
	}
	switch(choice)
	{
		case 1:
			printf("\nEnter the qualitity= ");
			scanf("%d",&num);
			num=num*180;
			total=total+num;
			printf("Amount  = %d\n",num);
			printf("total Amount is = %d",total);
			break;
		case 2:
			printf("\nEnter the qualitity= ");
			scanf("%d",&num);
			num=num*100;
			total=total+num;
			printf("Amount  = %d\n",num);
			printf("total Amount is = %d",total);
			break;
		case 3:
			printf("\nEnter the qualitity= ");
			scanf("%d",&num);
			num=num*120;
			total=total+num;
			printf("Amount = %d\n",num);
			printf("total Amount is = %d",total);
			break;
		case 4:
			printf("\nEnter the qualitity= ");
			scanf("%d",&num);
			num=num*50;
			total=total+num;
			printf("Amount = %d\n",num);
			printf("total Amount is = %d",total);
			break;
		}
		printf("\nDo you want to more order y & n = \n");
		scanf(" %c",&ch);
		printf("\n----------menu------------");	
		if(ch=='y')
		{
		    goto up;
		}
		
		
}

