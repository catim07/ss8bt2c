#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b;
	printf("moi ban nhap 1 phan tu de kiem tra: ");
	scanf("%d",&b);
	for(int i=0;i<9;i++){
		if(b==a[i]){
			printf("vi tri phan tu trong mang la: %d",i);
			return 0;
		}
	}
	printf("phan tu khong ton tai trong mang");
	return 0;
}
