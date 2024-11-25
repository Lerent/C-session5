#include <stdio.h>

int main ()
{
	int number1, number2, Luachon;
	printf("Hay nhap so thu nhat: ");
	scanf("%d", &number1);
	printf("Hay nhap so thu hai: ");
	scanf("%d", &number2);
	do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoát\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &Luachon);
	 switch (Luachon) {
		case 1:
			printf("Tong cua %d va %d la: %d\n", number1, number2, number1 + number2);
			break;
		case 2:
			printf("Hieu cua %d va %d la: %d\n", number1, number2, number1 - number2);
			break;
		case 3:
			printf("Tich cua %d va %d la: %d\n", number1, number2, number1 * number2);
			break;
		case 4:
            printf("Thuong cua %d và %d la: %.2f\n", number1, number2, (float)number1 / number2);
            break;
		case 5:
			printf("Thoat");
			break;
		default:
                printf("Lua chon cua ban khong hop le, hay nhap lai: \n");
	 }
	}while (Luachon != 5);
	
}
