#include <stdio.h>

int main() {
    int arr[]= {3, 2, 5, 4, 5, 3, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxCount = 0;
    int mostLoopNumber;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostLoopNumber = arr[i];
        }
    }
    printf("So %d duoc lap lai nhieu nhat %d lan\n", mostLoopNumber, maxCount);
}
