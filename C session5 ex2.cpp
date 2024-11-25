#include <stdio.h>

int main() 
{
    int number = 30;
    int a;
    printf("Hay nhap so a: ");
    scanf("%d", &a);
    while (a != number) 
	{
        printf("So nhap vao sai, hay nhap lai: ");
        scanf("%d", &a);
    }
    printf("Chuc mung ban da nhap dung so %d", number);

}

