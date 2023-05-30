#include<stdio.h>
int tong(int a, int b){
	int D=(a+b)*2;
	}

int tich(int a, int b){
	int S=a*b;
}
int main () {
	int num1, num2, total, nhan;
	printf("Chieu dai hinh chu nhat la:");
	scanf("%d", &num1);
	printf("Chieu rong hinh chu nhat la:");
	scanf("%d", &num2);
	
	total=tong(num1, num2);
	nhan=tich(num1, num2);
	
	printf("Chu vi hinh chu nhat la: %d\n", total);
	printf("Dien tich hinh chu nhat la: %d", nhan);
	
}
