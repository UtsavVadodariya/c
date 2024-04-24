#include <stdio.h>

int average(int arr[3][3], int rows, int cols) {
    float sum = 0.0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    return sum / count;
}

int main() {
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    float aver = average(arr, rows, cols);

    printf("Average of the 2D array: %f\n", aver);

}
