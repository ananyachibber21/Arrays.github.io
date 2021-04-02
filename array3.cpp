#include<stdio.h>

int main()
{
	int s[1000],i,n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter: ");
		scanf("%d",&s[i]);
		printf("%d",s[i]);
	}
	
	for (i = 1; i < n; ++i) {
        if (s[0] < s[i])
            s[0] = s[i];
    }

    printf("Largest element = %d", s[0]);
    return 0;

}
