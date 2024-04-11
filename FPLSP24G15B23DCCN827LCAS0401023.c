/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 23:  Xây dựng hàm tìm max của nửa tam giác trên bên trái của đường chéo phụ (bao gồm cả đường chéo phụ) của một ma trận vuông
*/
#include <stdio.h>
#define N 4 


int maxUpperLeftDiagonal(int matrix[][N]) {
    int max_val = matrix[0][N-1]; 
    for (int i = 0; i < N; ++i) {
        for (int j = 0;j<N-i; ++j) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j]; 
            }
        }
    }
    return max_val;
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = maxUpperLeftDiagonal(matrix); // Tìm giá trị lớn nhất của nửa tam giác trên bên trái của đường chéo phụ

    printf("Max value in upper left diagonal: %d\n", result); // In ra kết quả

    return 0;
}
