#include<stdio.h>
int main(){
	// Khai bao bien thang va nam  
	int thang, nam, so_ngay; 
	// Nhap thang va nam 
	printf("Moi ban nhap nam: ");
	scanf("%d", &nam );
	printf("Moi ban nhap thang: ");
	scanf("%d", &thang );
	
	//Kiem tra thang 
	if(thang < 1 || thang > 12 ){
	printf("Moi ban nhap lai thang:\n"); 
	return 1; 
	} 
	// Kiem tra so ngay 
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        so_ngay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        so_ngay = 30;
    } else if (thang == 2) {
        // Kiem tra nam nhuan 
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            so_ngay = 29;
        } else {
            so_ngay = 28;
} 
}
        printf("So ngay trong thang do la: %d", so_ngay );
        
 return 0;
}
