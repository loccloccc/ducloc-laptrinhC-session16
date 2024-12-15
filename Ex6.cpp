#include<stdio.h>
#include<stdlib.h>
int timkiem(int *arr , int search);
int main()
{
	int arr[5]={1,4,3,7,55};
	int value ; 
	timkiem(arr, value);
	
	
	return 0 ; 
}
int timkiem(int *arr , int search)
{
	int vitri;
	printf("Nhap :");
	scanf("%d",&search);
	
	for(int i = 0 ; i < 5 ; i++)
	{
		if(arr[i] == search)
		{
			vitri = i+1 ;
			break ; 
		}
		
	}
	printf("Vi tri : %d" , vitri);
	return vitri;
}
