#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int checkNumber;
    int flag = 0;
    printf("Nhap vao so ban muon tim trong mang:");
    scanf("%d", &checkNumber);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == checkNumber) {
            flag++;
            printf("Vi tri phan tu trong mang la %d\n",i);
        }
    }
    if (flag == 0) {
        printf("Phan tu khong ton tai trong mang");
    }
}
