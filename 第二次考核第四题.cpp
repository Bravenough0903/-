#include<stdio.h>
void numstarget ( int nums[],int len,int target,int*a,int*b);
int main()
{
	int n;
 	printf("�����������м���ֵ"); 
	scanf("%d",&n);
	int nums[n];
	printf("�����������") ;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	int target,a,b;
	printf("�������targetֵ");
	scanf("%d",&target);
	numstarget(nums,sizeof(nums)/sizeof(nums[0]),target,&a,&b); 
	
	printf("�������������±���%d��%d",a,b);

}


void numstarget ( int nums[],int len,int target,int*a,int*b)
	{
	for(int i=0;i<len;i++){
	
		for(int j=i+1;j<len;j++)
		{
			
			if(target-nums[i]==nums[j]){
				*a=i;
				*b=j;
			}
		}
				 
}
	



}
