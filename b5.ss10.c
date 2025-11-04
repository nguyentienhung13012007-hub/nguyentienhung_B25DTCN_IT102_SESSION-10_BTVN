#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    int found = 0;
    int dem = 0; 

    printf("Nhap x: ");
    scanf("%d", &x);

  
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay tai vi tri: %d\n", i);
            found = 1;
            dem++; 
        }
    }

    if (found == 0)
        printf("Khong tim thay %d trong mang.\n", x);
    else
        printf("So %d xuat hien %d lan trong mang.\n", x, dem);

    return 0;
}

