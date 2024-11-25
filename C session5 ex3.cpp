#include <stdio.h>

int main() 
{
    int num, i, Tong;
    printf("Hay nhap mot so nguyen duong: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Hay nhap mot so nguyen duong\n");
    } else {
        for (i = 1; i <= num; i = i + 1) {
        	Tong = Tong + i;
        }
        printf("Tong cua tat ca cac so la: %d\n", Tong);
    }

}

