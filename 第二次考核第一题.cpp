#include<stdio.h>
int main()
{	
 	int n;
 	int i,j,l;
 	printf("�����������м���ֵ"); 
	scanf("%d",&n);
	int num[n];
	printf("�����������") ;
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
	printf("�����С��������Ϊ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	} 
	
	
	return 0;
}
