#include<iostream>
using namespace std;
int main()
{
	int  n,x;
	int a[101]; //
	cout<<"����������ĸ���"<<endl;
	cout<<"��������ɾ���ڼ�����"<<endl;
	cin>>n>>x;
	cout<<"�����������"<<endl; 
	int i;
	for(i=0;i<n;i++){	//i=1
		scanf("%d",&a[i]);
	}
	for( i=x ;i<n;i++)
		a[i-1]=a[i];
	
	for (i=0;i<n-1;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
