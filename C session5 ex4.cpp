#include <stdio.h>

int main() 
{
    int num;
    printf("Hay nhap tu 1 den 10: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 10) {
        printf("Bang cuu chuong cua %d la:\n", num);
        for (int i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    } else {
        printf("Hay nhap so tu 1 den 10 \n");
    }

}

