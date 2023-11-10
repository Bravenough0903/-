#include<stdio.h>
int main()
{	
 	int n;
 	int i,j,l;
 	printf("请输入数组有几个值"); 
	scanf("%d",&n);
	int num[n];
	printf("输入你的数组") ;
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for (i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-1-i;j++)
		{
	
			if(num[j]>num[j+1])
		{
			l=num[j];
			num[j]=num[j+1];
			num[j+1]=l;		
 	   }
	}
}
	printf("数组从小到大排列为");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	} 
	
	
	return 0;
}
