#include <stdio.h>

int main()
{
   unsigned long int input_val;
   int temp[11]; 
   int temp;
   int c; 
   int i,j;
   int k; 
   int swap_temp;
   scanf("%lu",&input_val);
   scanf("%d",&k);
   for(i=0,c=1;;i++,c++)
   {
       temp=input_val%10;
       temp[i]=temp;
       input_val=input_val/10;
       if(input_val==0) break;
   }
   for(i=0;i<c;++i)
   {
       for(j=i+1;j<c;++j)
       {
           if(temp[i]>temp[j])
           {
               swap_temp=temp[i];
               temp[i]=temp[j];
               temp[j]=swap_temp;
           }
       }
   }
   printf("\nThe result is:");
   for(i=0;i<c-k;i++)
   {
       printf("%d",temp[i]);
   }
   return 0;
}
