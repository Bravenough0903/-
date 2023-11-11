#include<iostream>
using namespace std;
int main()
{
	int  n,x;
	int a[101]; //
	cout<<"输入你数组的个数"<<endl;
	cout<<"输入你想删除第几个数"<<endl;
	cin>>n>>x;
	cout<<"输入你的数组"<<endl; 
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
