#include<stdio.h>
#define MAX 30
template<class Type>
int BinarySearch(Type a[],const Type& x,int n){  //在a[0]<=a[1]<=...<=a[n-1]中搜索X
//找到x时返回其在数组中的位置,否则返回-1
int left = 0;    int right = n-1;   
while (left<=right) {
	int middle = (left+right)/2;
	if(x == a [middle])
	return middle;
	if(x > a [middle])
	left = middle+1;
	else
		right=middle-1;
}
return-1;    //未找到x 
}

int main(void)
{
	int a[MAX];
	int found,x,n,i,j,p;
	printf("数的个数\n");
	scanf("%d",&n);
	printf("输入数据\n");
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个数据:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)   //选择排序 
	{
		p=i;
		for(j=i+1;j<n;j++)
			if(a[p]>a[j])
		p=j;
		if(p!=j)
		{
		x=a[p];
		a[p]=a[i];
		a[i]=x;
		}
	}
	printf("排序后的数据如下:");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("输入要查找的数\n");
	scanf("%d",&x);
	int left=0,right=n;
	found=BinarySearch(a,x,n);
	if(found==-1)
	{
		printf("未找到\n");
	}
	else
	{
		printf("要查找的数在第 %d个\n",found+1);
	}


}
