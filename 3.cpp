#include<stdio.h>
int main()
{
	int a,b;
	printf("Please input a,b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int t=a;
		a=b;
		b=t;
	}
	for(int i=a;i>1;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}
	if(i==1)
		printf("�����Լ��\n");
	else
		printf("���Լ��Ϊ��%d\n",i);
	return 0;

}
