#include <stdio.h>
int main(void)
{
	int a,b;
	printf("������������");
	scanf("%d %d",&a,&b);
	
	while(a!=b) 
	{
		if(a>b) 
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}

	}
	printf("���Լ��Ϊ%d",a);
	return 0;
}
