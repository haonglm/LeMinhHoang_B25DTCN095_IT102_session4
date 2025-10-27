#include <stdio.h>
int main(){
    
	int ngay, thang, nam; 
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int hopLe = 1;

    if (thang < 1 || thang > 12){
        hopLe = 0;
    } else {
        int soNgayTrongThang;

        switch (thang){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                soNgayTrongThang = 31;
                break;
            case 4: case 6: case 9: case 11:
                soNgayTrongThang = 30;
                break;
            case 2:
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
                    soNgayTrongThang = 29;
                } else {
                    soNgayTrongThang = 28;
                }
                break;
        }

        if (ngay < 1 || ngay > soNgayTrongThang){
            hopLe = 0;
        }
    }

    if (hopLe){
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }
    return 0;
}

