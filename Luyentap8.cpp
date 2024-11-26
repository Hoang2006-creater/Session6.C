#include<stdio.h>
int main(){
	int tien, lai, thang, tienlai , tong ; 
	printf("Moi ban nhap so tien gui: ");
	scanf("%d", &tien);
	printf("Moi ban nhap so lai: %");
	scanf("%d",&lai);
	lai /=100; 
	printf("Moi ban nhap so thang: ");
	scanf("%d", &thang);
	tienlai = thang * lai * tien;
	tong = tienlai + tien;
	printf("So tien lai la: %d\n", tienlai);
	printf("So tien nhan duoc khi gui ngan hang la: %d\n", tong);
	
	return 0;
}
