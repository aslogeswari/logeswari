#include<stdio.h>
int main()
{
	int n,a,i;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d\n",i,a,(a*i));
	}
	
	return 0;
}
