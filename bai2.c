#include<stdio.h>
int main(){
	
	int a;
	printf("nhap so nguyen:");
	scanf("%d",&a);
	printf(" %d la so %s",a,(a % 2 == 0) ? "chan" : "le");
	
	return 0;
}
