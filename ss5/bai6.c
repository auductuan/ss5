#include <stdio.h>
int main() {
    int number1, number2, choice;
    printf("Nhap vao hai so: ");
    scanf("%d %d", &number1, &number2);
    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Tong 2 so %d + %d = %d\n", number1, number2, number1 + number2);
                break;
            case 2:
                printf("Hieu 2 so %d - %d = %d\n", number1, number2, number1 - number2);
                break;
            case 3:
                printf("Tich 2 so %d * %d = %d\n", number1, number2, number1 * number2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong 2 so %d / %d = %.2f\n", number1, number2, (float)number1 / number2);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}

