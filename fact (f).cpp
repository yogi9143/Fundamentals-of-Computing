#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the number for factorial:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	
	}
	printf(" The factorial of given number is: %d",fact);
	
}
