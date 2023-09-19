#include <stdio.h>

// 定義影像和卷積核的大小
#define IMAGE_SIZE 5
#define KERNEL_SIZE 3

// 定義影像和卷積核
int image[IMAGE_SIZE][IMAGE_SIZE] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};

int kernel[KERNEL_SIZE][KERNEL_SIZE] = {
    {0, 1, 0},
    {1, 1, 1},
    {0, 1, 0}
};

// 函式：計算卷積
int convolve(int x, int y) {
    int result = 0;

    for (int i = 0; i < KERNEL_SIZE; i++) {
        for (int j = 0; j < KERNEL_SIZE; j++) {
            result += image[x + i][y + j] * kernel[i][j];
        }
    }

    return result;
}

int main() {
    // 計算卷積後的結果並輸出
    for (int i = 0; i <= IMAGE_SIZE - KERNEL_SIZE; i++) {
        for (int j = 0; j <= IMAGE_SIZE - KERNEL_SIZE; j++) {
            int result = convolve(i, j);
            printf("%d ", result);
        }
        printf("\n");
    }

    return 0;
}

