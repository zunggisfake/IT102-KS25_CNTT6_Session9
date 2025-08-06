#include <stdio.h>
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    float average = (float)total / size;
    printf("Trung binh = %.2f\n", average);
}