#include <stdio.h>

int main() {
    int arr[100]; 
    int n; 
    int value, pos; 

    printf("Nhap so phan tu muon nhap vào mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le. Vui long nhap lai tu 1 den 100.\n");
        return 1;
    }

    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang hien tai:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap giá tri muon thêm: ");
    scanf("%d", &value);
    printf("Nhap vi trí muon them (0 d?n %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Vi tri không hop le. Vui long nhap lai vi tri tu 0 den %d.\n", n);
        return 1;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++; 

    printf("Mang sau khi thêm phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
