#include<stdio.h>
int main(){
	int n;
	while (1){
	printf("Moi ban nhap mat khau co 4 chu so: ");
	scanf("%d", &n);
	if( n == 8386){
		printf("Ban da nhap dung mat khau");
		break; 
	}
	else{
		printf("Moi ban nhap lai mat khau\n");
	} 
}
	return 0; 
}
