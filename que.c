#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(char*)b)-(*(char*)a);
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        max=(max>a[i])?max:a[i];
    }
    int hash[max];
    for(i=0;i<max;i++){
        hash[i]=0;
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        hash[a[i]]++;
    }
    int flag=0;
    for(i=0;i<m;i++){
        if(hash[b[i]]!=0){
            hash[b[i]]--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not a subset");
    }
    else{
        printf("subset");
    }
    return 0;
}
