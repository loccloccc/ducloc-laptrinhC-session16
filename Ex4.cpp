#include<stdio.h>
#include<stdlib.h>
void print(int *arrPtr , int arr[5]);
int main()
{

	int arr[5] = {1,2,3,9,8};
	
	print(arr,arr );
	return 0 ; 
}
void print(int *arrPtr , int arr[5])
{
	for(int *arrPtr = arr ; arrPtr < arr+5  ; arrPtr++)
	{
		printf("%d ",*arrPtr);
	}
}