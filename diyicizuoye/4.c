#include<stdio.h>
int fun(int a,int b){
	int t=a%b;
	while(t!=0){
		a=b;
		b=t;
		t=a%b;
	}
	return b;
} 
main(){
	int a,b,x;
	printf("����������a,b(a>b):");
	scanf("%d%d",&a,&b);
	x=fun(a,b);
	printf("���Լ��Ϊ:%d",x);
}
