#include <stdio.h>
int main() {
    int a = 20;  
    int b;
    do {
        printf("Nhap vao mot so: ");
        scanf("%d", &b);
        if (a != b) {
            printf("Moi b nhap lai.\n");
        }
    } while (a == b);
    printf("B da nhap dung ! : %d.\n", a);
    return 0;
}

