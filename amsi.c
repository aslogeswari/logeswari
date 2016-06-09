#include <stdio.h>

int main(void) {
	int n,i,t,sum,r,a,b;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
	t=i;
	sum=0;
	while(t!=0)
	{
		r=t%10;
		sum+=r*r*r;
		t=t/10;
	}
	if(i==sum)
	{
		printf("%d is amstrong",i);
	}
	}
	return 0;
}
