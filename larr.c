#include<stdio.h>
int main()
{
	int n,i,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num);
	if(num==i)
	{
		printf("%d",i);
	}
	}
}
