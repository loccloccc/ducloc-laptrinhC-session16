#include<stdio.h>
#include<stdlib.h>


int res(int *aPtr , int *bPtr);
int main()
{
	
	int a = 10 ; 
	int b = 20 ; 
	int total ; 
	total = res(&a,&b);
	printf("%d",total);
	return 0 ; 
}
int res(int *aPtr , int *bPtr)
{
	int total = *aPtr + *bPtr;
	return total;
}
