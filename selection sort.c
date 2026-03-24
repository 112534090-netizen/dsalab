#include<stdio.h>
int main()
{
	int n,i,j, temp,minlndex;
	printf("enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d element:\n",n);
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
    	minindex=i;
    	for(int j=i+1;j<n;J++)
	}
	temp=arr[i];
	arr[i]=arr[minindex];
	arr[minindex]=temp;
}
printf("sorted array:\n");
for(int i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}
