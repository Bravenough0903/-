#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("��������������");
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
		printf("���������%d",b);
	
	return 0;
 } 
