#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("请输入两个数字");
	scanf("%d %d",&a,&b);
	if (a<b)
	{
		c=b;
		b=a;
		a=c;
	}
	    d=a%b;
	    while(d!=0)
	    {
	    	a=b;
	    	b=d;
	    	d=a%b;
	    	
		}
		printf("最大公因数是%d",b);
	
	return 0;
 } 
