#include <stdio.h>

// Hàm chuyển ma trận thành một mảng (véc-tơ hàng)
void matrixToVector(int arr[][3], int rows, int cols, int result[]) {
    int k = 0; // Biến chỉ số của mảng kết quả
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[k++] = arr[i][j]; // Gán giá trị của ma trận vào mảng kết quả
        }
    }
}
// Hàm chuyển ma trận thành một mảng (véc-tơ cột)
void matrixToVectorC(int arr[][3], int rows, int cols, int result[]) {
    int k = 0; // Biến chỉ số của mảng kết quả
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            result[k++] = arr[i][j]; // Gán giá trị của ma trận vào mảng kết quả
        }
    }
}
int main() {
    int arr[][3] = {{5, 10, 3}, {8, 15, 20}, {1, 6, 12}}; // Mảng hai chiều ví dụ
    int rows = sizeof(arr) / sizeof(arr[0]); // Số hàng trong mảng
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Số cột trong mảng
    int result[rows * cols]; // Mảng kết quả (véc-tơ hàng)
    
    matrixToVector(arr, rows, cols, result); // Chuyển ma trận thành mảng kết quả
    for (int i = 0; i < rows * cols; ++i) {
        printf("%d ", result[i]); // In ra mảng kết quả
        
    }
    matrixToVectorC(arr,rows,cols,result);
    for (int i = 0; i < rows * cols; ++i) {
        printf("%d\n", result[i]); // In ra mảng kết quả
    }
    printf("\n");
    
    return 0;
}
