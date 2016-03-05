#include <stdio.h>
 
int main(void) {
	int arr[100],i,n,temp,a;
	printf("enter the no.of elements");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	a=(n/2);
 	if((n%2)!=0)
	{
		for(temp=0,i=1;i<=a;i++)
		{
			temp=arr[i];
			arr[i]=arr[i+(a+1)];
			arr[i+(a+1)]=temp;
		}
	}
	else
	{
		for(temp=0,i=1;i<=a;i++)
		{
			temp=arr[i];
			arr[i]=arr[i+a];
			arr[i+a]=temp;
		}
	}

 
	for(i=1;i<=n;i++)
	{
	printf("%d",arr[i]);
	}
 
	
	return 0;
