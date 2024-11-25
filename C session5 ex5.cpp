#include <stdio.h>

int main() 
{
    for (int num = 1; num <= 9; num = num + 1) {
        printf("Bang cuu chuong cua %d la:\n", num);
        for (int i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}

