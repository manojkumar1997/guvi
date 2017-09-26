#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is large");
}
else if(b>c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
return 0;
}
