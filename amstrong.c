#include <stdio.h>

int main(void) {
	int n,i,t,sum=0,r;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		sum+=r*r*r;
		t=t/10;
	}
	if(n==sum)
	{
		printf("%d is amstrong",n);
	}
	else
	{
	printf("%d is not a amstrong",n);
	}
	return 0;
}

