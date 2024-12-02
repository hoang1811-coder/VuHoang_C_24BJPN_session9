#include <stdio.h>}
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int n, arr[100], x, position, count, sum;
    int choice;

    while (1) {
        // Hi?n th? menu
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                printf("Nhap gia tri cho %d phan tu:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Gia tri cac phan tu trong mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Gia tri cac phan tu chan trong mang:\n");
                sum = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;

            case 4:
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;

            case 5:
                printf("Cac phan tu la so nguyen to trong mang:\n");
                sum = 0;
                for (int i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu nguyen to: %d\n", sum);
                break;

            case 6:
                printf("Nhap so can tim: ");
                scanf("%d", &x);
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        count++;
                    }
                }
                printf("So %d xuat hien %d lan trong mang.\n", x, count);
                break;

            case 7:
                printf("Nhap vi tri muon them phan tu: ");
                scanf("%d", &position);
                if (position < 1 || position > n + 1) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri phan tu: ");
                    scanf("%d", &x);
                    for (int i = n; i >= position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position - 1] = x;
                    n++;
                    printf("Phan tu da duoc them vao vi tri %d.\n", position);
                }
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    }

    return 0;
}
