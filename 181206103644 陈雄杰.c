#include<stdio.h>
#define MAX 30
template<class Type>
int BinarySearch(Type a[],const Type& x,int n){  //��a[0]<=a[1]<=...<=a[n-1]������X
//�ҵ�xʱ�������������е�λ��,���򷵻�-1
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
return-1;    //δ�ҵ�x 
}

int main(void)
{
	int a[MAX];
	int found,x,n,i,j,p;
	printf("���ĸ���\n");
	scanf("%d",&n);
	printf("��������\n");
	for(i=0;i<n;i++)
	{
		printf("�������%d������:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)   //ѡ������ 
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
	printf("��������������:");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("����Ҫ���ҵ���\n");
	scanf("%d",&x);
	int left=0,right=n;
	found=BinarySearch(a,x,n);
	if(found==-1)
	{
		printf("δ�ҵ�\n");
	}
	else
	{
		printf("Ҫ���ҵ����ڵ� %d��\n",found+1);
	}


}
