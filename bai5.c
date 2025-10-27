#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDien;
    long tienDien = 0;
    //nhap chi so dien 
    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);
    //kiem tra  
    if (chiSoMoi < chiSoCu) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 0;
    }
    // cong thuc tinh  
    soDien = chiSoMoi - chiSoCu;
    //tinh tien dien  
    if (soDien < 50) {
        tienDien = soDien * 10000;
    } else if (soDien < 100) {
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    } else if (soDien < 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    } else if (soDien < 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
    }

    //in ket qua  
    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %ld VND\n", tienDien);

    return 0;
}

