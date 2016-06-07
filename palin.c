#include<stdio.h>
int main()
{
	int n,temp,sum=0,r;
	scanf("%d",&n);
	temp=n;
	while(n)
	{
	 r=n%10;
	 n=n/10;
	 sum=sum*10+r;
	}
	if(temp==sum)
	{
		printf("%d is a palindrome",temp);
	}
	else
	printf("%d is not a palindrome",temp);
}
