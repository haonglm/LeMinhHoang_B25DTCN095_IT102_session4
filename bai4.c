#include<stdio.h>
int main(){
	
	int thang,nam;
	//khai bao thang, nam
	printf("nhap thang (1-12) :");
	scanf("%d",&thang);
	//kiem tra hop le 
	if(thang < 1 || thang > 12){
		printf("thang khong hop le.\n");
		return 0;
	} 
	//thang 2 co 28 or 29 ngay nen can kt nam nhuan
	if(thang == 2){
		printf("nhap nam: ");
		scanf("%d",&nam);
		if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)){
			printf("thang 2 co 29 ngay (nam nhuan).\n");
		} else {
			printf("thang 2 co 28 ngay.\n");
	}
}
	//thang co 31 ngay
	else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		printf("thang %d co 31 ngay.\n",thang);
	} else {
		printf("thang %d co 30 ngay.",thang);
	}
	return 0;
}
