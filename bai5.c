#include <stdio.h>
int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    int min, max;
    if (a < b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
   
    if (c > min && c < max)
        printf("So thu 3 nam trong khoang giua so 1 va so 2\n");
    else
        printf("So thu 3 khong nam trong khoang giua so 1 va so 2\n");

    return 0;
}

