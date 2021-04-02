#include<stdio.h>

int main()
{
	int s[3],i;
	for(i=0;i<3;i++)
	{
		printf("\n%d", i+1);
		scanf("%d",&s[i]);
	}
	printf("---student marks details---");
	for(i=0;i<3;i++)
	{
		printf("\n%d=%d",i+1,s[i]);
	}
}
