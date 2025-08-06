#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total;
    printf("Cac so tren duong cheo chinh la:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d\n", arr[i][j]);
                total += arr[i][j];
            }
        }
    }
    printf("Tong cac so tren duong cheo chinh la: %d", total);
}