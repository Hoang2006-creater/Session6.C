#include<stdio.h> 
int main(){
	int num1, num2, num3, num4, num5, le = 0, chan = 0;
	printf("Moi ban nhap so nguyen: "); 
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	if(num1 % 2 == 0 ){
    chan += 1; 
	}else 
	le += 1; 
    if(num2 % 2 ==0 ){
    chan += 1 ; 
	}else 
	le += 1; 
    if(num3 % 2 ==0 ){
    chan += 1; 
	}else 
	le += 1; 
    if(num4 % 2 ==0 ){
    chan += 1; 
	}else 
	le += 1; 
    if(num5 % 2 ==0 ){
    chan += 1 ; 
	}else 
	le += 1;
	printf(" So luong so chan la %d, So luong so le la %d ", chan, le);
	
	return 0;
}
