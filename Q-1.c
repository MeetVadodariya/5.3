#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter A value of the first number : ");
	scanf("%d",&a);
	printf("Enter B value of the second number : ");
	scanf("%d",&b);
	printf("Enter C value of the third number : ");
	scanf("%d",&c);
	
	(a<b)?printf("The minimum value is = %d",a) :(b<c)? printf("The minimum value is = %d",b) :printf("The minimum value is = %d",c);	
}
