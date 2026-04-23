/*cho 1 array n phần tử nhập từ bàn phím, yêu cầu: 1 sắp xếp array, 2 tìm min max, 3 tìm 1 giá trị bất kì*/

#include <stdio.h>

int main() {
    int n, i, j, temp, x, found = 0;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("\nGia tri Min: %d", min);
    printf("\nGia tri Max: %d\n", max);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Tim thay %d tai vi tri index %d\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Khong tim thay %d trong mang.\n", x);

    return 0;
}