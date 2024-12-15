#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int a = 12;
	int *aPtr ;
	aPtr = &a ; 
	printf("Gia tri 1 : %d\n",*aPtr);
	printf("Gia tri 2 : %d\n",a);
	printf("Gia tri dia chi 1 : %d\n ",&a);
	printf("Gia tri dia chi 2 : %d\n ",aPtr);
	
	
	
	return 0 ; 
}