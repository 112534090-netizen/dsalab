#include<stdio.h>
int main()
{
	int n,i,search,found=0;
	//input numbers of element in the array
	printf("enter number of element in the array:");
	scanf("%d",&n);
	int arr[n];
	//input array elements
	printf("enter elem,ent of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		}
		//input the elment to search
		printf("enter element to search:");
		scanf("%d",&search);
		//linear search
		for(i=0;i<n;i++)
		{
			if (arr[i]==search)
			{
				found=1;
				printf("enter %d found at index%d.\n",search,i);
				break;
			}
		}
			//if element is not found
			if(!found)
			{
				printf("enter %d not found in the array.\n",search);
			}
			return 0;
		}
	
