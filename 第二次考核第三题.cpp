#include<stdio.h>
int main()
{	
 	int n;
 	int i;
 	printf("�����������м���ֵ"); 
	scanf("%d",&n);
	int num[n];
	printf("�����������") ;
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}   
	int a;
	printf("Ҫ��������鳤��");
	scanf("%d",&a);
	printf("������Ҫ���������"); 
	for (i=0;i<a;i++){
		scanf("%d",&num[n+i]);
	} 
		
		for(i=0;i<n+a;i++){
		printf("%d\n",num[i]);
	} 
	
	
	return 0;
}
