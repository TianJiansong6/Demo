#include<stdio.h>
int main()
{
	int a,b,t;
	printf("������......\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		int p=a;
		a=b;
		b=p;
	}
	for(	;	;	)
	{
		t=a%b;
		if(t==0)
		{
			printf("���Լ��Ϊ%d\n",b);
			break;
		}
		else
		{	a=b;
			b=t;
		}
	}
	return 0;
}