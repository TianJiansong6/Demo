#include <stdio.h>
int main()
{
	int a,b,c;
	printf("�������������֣��м��ÿո񣩣�");
	scanf("%d %d",&a,&b);
	
	c=a%b;
	
	while(c!=0) 
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("�������������Լ����%d",b);
	return 0;
 } 
