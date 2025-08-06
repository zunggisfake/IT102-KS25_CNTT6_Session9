#include <stdio.h>

int main() {
    int arr[]= {3, 2, 5, 7, 5, 9, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    printf("Cac so duoc lap nhieu nhat la:\n");
    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = i; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == maxCount) {
            maxCount = count;
            printf("%d  ", arr[i]);
        }
    }

}
