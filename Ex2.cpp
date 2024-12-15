#include<stdio.h>
#include<stdlib.h>


void doiso(int *num1 , int *num2);
int main()
{
	int a = 10 ; 
	int b = 20 ;
	printf("%d\n",a);
	printf("%d\n",b);
	doiso(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	
	return 0 ;  
}
void doiso(int *num1 , int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}