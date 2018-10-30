#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* a,const void* b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	int i,a[1000];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d\n",a[i]);
	return 0;
}
