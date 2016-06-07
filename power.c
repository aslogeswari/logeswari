#include <stdio.h>

int main(void) {
	int base,rem,exp,out=1;
	scanf("%d%d",&base,&exp);
	while(exp!=0)
	{
		out*=base;
		exp--;
	}
	printf("power is=%d",out);
	return 0;
}
