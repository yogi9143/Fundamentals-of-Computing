#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number for series:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
		sum=sum+i;
		}
	}
	printf("sum of odd series is: %d",sum);
	
}
