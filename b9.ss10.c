#include <stdio.h>

int main() {
    int n, i, j, temp;
    int left, right, mid;
    int x;
    int found = 0;

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int gia[n];

    printf("Nhap gia cua tung san pham:\n");
    for (i = 0; i < n; i++) {
        printf("San pham %d: ", i);
        scanf("%d", &gia[i]);
    }

  
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (gia[j] > gia[j + 1]) {
                temp = gia[j];
                gia[j] = gia[j + 1];
                gia[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    printf("\nGia san pham sau khi sap xep tang dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", gia[i]);
    }

  
    printf("\n\nNhap gia san pham can tim: ");
    scanf("%d", &x);

  
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (gia[mid] == x) {
            printf("Tim thay san pham co gia %d tai vi tri %d\n", x, mid);
            found = 1;
            break;
        } else if (gia[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found == 0)
        printf("Khong tim thay san pham co gia %d\n", x);

    return 0;
}

