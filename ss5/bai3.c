#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    return 0;
}

