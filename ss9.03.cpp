#include <stdio.h>

int main() {
    int arr[100]; 
    int n; 
    int pos; 

    printf("Nhap so phan tu muopn nhap vao mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu không hop le. Vui lòng nhap lai tu 1 den 100.\n");
        return 1;
    }

    printf("Nhap các phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang hien tai :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le .\n");
        return 1;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }

    n--; 

    printf("Mang sau khi xoa phan tu tai vi tri %d:\n", pos);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
