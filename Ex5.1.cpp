#include <stdio.h>

void updateElement(int *arr, int newValue, int index);

int main() {
	int length , arr[100];
	printf("Moi ban nhap so luong phan tu trong mang :");
	scanf("%d",&length);
   
    arr[length] ;
    printf("Moi ban nhap gia tri cac phan tu : ");
    for(int i = 0 ; i < length ; i++)
    {
    	printf("arr[%d] = ",i);
    	scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Gia tri phan tu ban dau la : ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
    int n , s ;
    
   
   
    updateElement(arr, n, s);
    printf("\n");
    
    printf("Mang sau khi cap nhat : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


void updateElement(int *arr, int newValue, int index) {
	 
	printf("Moi ban nhap vi tri  :");
	scanf("%d",&index);
   
    if (index >= 0 && index < 5) {
    	printf("Moi ban nhap gia tri moi :");
    	scanf("%d",&newValue);
        *(arr + index) = newValue;  
    } else {
        printf("Vi  tri khong hop le \n");
    }
}
