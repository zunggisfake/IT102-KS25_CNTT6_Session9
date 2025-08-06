#include <stdio.h>
int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int total;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Cac so tren duong cheo phu la:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 3 - j) {
                printf("%d\n", arr[i][j]);
                total += arr[i][j];
            }
        }
    }
    printf("Tong cac so tren duong cheo chinh la: %d", total);
}