#include <stdio.h>

int main(void) {
	int arr[100],dup[20],a,n,i,j,k=0,c=1,p=0;
	printf("\nEnter the no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for (i = 0,k=0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<n;i+=c)
    {
    	for(j=i+1,p=0,c=1;j<n;j++)
    	{
    		if(arr[i]==arr[j])
    		{
    			++c;
    			if(p==0)
    			{
    				++p;
    				dup[k]=arr[j];
    				printf("\n Duplicate:%d",dup[k]);
    				++k;
    			}
    		}
    	}
    }
    if(k==0)
    	printf("\n No duplicates");
	return 0;
}
