#include <stdio.h>
int main()
{
	int figure=0; 
	printf("������һ����λ��");
	scanf("%d",&figure);
	
	int a=figure/100;
	int b=figure%100/10;
	int c=figure%10;
	
	printf("���������Ϊ%d",c*100+b*10+a) ;
	return 0;
  }
