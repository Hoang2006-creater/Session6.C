#include<stdio.h>
int main(){
	int num1, num2, num3, num4, num5, tong;
	printf("Moi ban nhap so nguyen: "); 
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	if(num1 % 2 !=0 ){
	tong = num1; 
	}
    if(num2 % 2 !=0 ){
	tong += num2;
	}
    if(num3 % 2 !=0 ){
	tong += num3; 
	}
 	if(num4 % 2 !=0 ){
	tong += num4; 
	}
	if(num5 % 2 !=0 ){
	tong += num5; 
	}
	printf("Tong cac so le ban nhap la %d", tong);
	
	return 0;
}
