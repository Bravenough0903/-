#include<iostream>
using namespace std;
int main()
{
	int  n,x,y;
	int a[101]; //
	cout<<"输入你数组的个数"<<endl;
	cout<<"输入你想插入到第几个数后面"<<endl;
		cout<<"输入你想插入的数"<<endl;
	cin>>n>>x>>y;
	cout<<"输入你的数组"<<endl; 
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
