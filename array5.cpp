#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int arr[100];
    for (i = 0; i < 100; i++) 
	{
		arr[i] = rand();
		printf("%d",arr[i]);
    }    
}
