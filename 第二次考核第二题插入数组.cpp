#include<iostream>
using namespace std;
int main()
{
	int  n,x,y;
	int a[101]; //
	cout<<"����������ĸ���"<<endl;
	cout<<"����������뵽�ڼ���������"<<endl;
		cout<<"��������������"<<endl;
	cin>>n>>x>>y;
	cout<<"�����������"<<endl; 
	int i;
	for(i=0;i<n;i++){	//i=1
		scanf("%d",&a[i]);
	}
	for( i=n ;i>x;i--)
		a[i]=a[i-1];
		a[x]=y;
	
	for (i=0;i<n+1;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
