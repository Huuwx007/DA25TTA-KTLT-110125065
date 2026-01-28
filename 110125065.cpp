#include<stdio.h>

int main()
{
	int a,b,t,h,ti;
	float thuong;
	
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	printf("\n%d / %d = %.2f",a,b,1.0*a/b);
	
	return 0;
}