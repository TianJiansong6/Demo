#include <stdio.h>
#include <stdlib.h>
int main (){
	char a[255];
	int x=75^40;
	itoa(x,a,2);
	printf("���Ϊ:%s",a);
	itoa(x,a,16);
	printf("ʮ���������Ϊ:%s",a);
}
