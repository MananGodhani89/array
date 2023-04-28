#include<stdio.h>

main()
{
	int a[9999],n,i,sum,avg;
	printf("Enter Size Of Array=");
	scanf("%d",&n);
	
	printf("Enter Array Value=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n------------------------------------------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		 
	}
	printf("sum=%d",sum);
	avg=sum/n;
	
	printf("avg=%d",avg);
	
	
}
