#include <stdio.h>
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 || j == 0 || i == 2 || j == 2) {
                total += arr[i][j];
            }
        }
    }
    printf("Tong cac so o bien trong mang la: %d", total);
}