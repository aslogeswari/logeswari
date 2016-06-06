#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		printf("%c is a alphapet",c);
	}
	else
	printf("%c is a number",c);
}
