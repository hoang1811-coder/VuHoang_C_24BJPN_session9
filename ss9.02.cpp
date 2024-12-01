
#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; 
    int n = 5; 
    int pos, new_value;
    
    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le. \n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &new_value);

    arr[pos] = new_value;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
