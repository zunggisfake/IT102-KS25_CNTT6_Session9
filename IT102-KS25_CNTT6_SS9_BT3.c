#include <stdio.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", n);
        }
        printf("\n");
    }
}