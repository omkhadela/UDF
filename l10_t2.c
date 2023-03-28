#include<stdio.h>

main () 
{
	
	int n;
	
	do
	{
		
		printf("\nPress 1 for sum\n");
		printf("Press 2 for sub\n");
		printf("Press 3 for multy\n");
		printf("Press 4 for div\n");
		printf("Press 5 for modulo\n");
		printf("Press 0 for exit\n");
		printf("Enter your choice : ");
		scanf("%d",&n);
	
		switch (n)
		{
			case 1:
				sum();
			break;
			case 2:
				sub();
			break;
			case 3:
				multy();
			break;
			case 4:
				div();
			break;
			case 5:
				modulo();
			break;
		}
	}
	while(n!=0);
	
	
}
sum () 
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("The sum is : %d",a+b);
}
sub () 
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("The sub is : %d",a-b);
}
multy () 
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("The multy is : %d",a*b);
}
div () 
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("The div is : %d",a/b);
}
modulo () 
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("The modulo is : %d",a%b);
}
