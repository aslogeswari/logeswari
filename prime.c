#include <stdio.h>

int main(void) {
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		flag=1;
		break;
	}
	if(flag==0)
	{
		printf("%d is a prime number",n);
	}
	else
	printf("%d is not a prime number",n);
	// your code goes here
	return 0;
}
