#include<stdio.h>
int main()
{	
 	int n;
 	int i;
 	printf("请输入数组有几个值"); 
	scanf("%d",&n);
	int num[n];
	printf("输入你的数组") ;
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}   
	int a;
	printf("要插入的数组长度");
	scanf("%d",&a);
	printf("输入你要插入的数组"); 
	for (i=0;i<a;i++){
		scanf("%d",&num[n+i]);
	} 
		
		for(i=0;i<n+a;i++){
		printf("%d\n",num[i]);
	} 
	
	
	return 0;
}
