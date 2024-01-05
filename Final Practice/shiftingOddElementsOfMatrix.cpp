#include <iostream>
using namespace std;

const int MATRIX_MAX = 100;

void OddShift(int matrix[MATRIX_MAX][MATRIX_MAX], int rows, int cols) {
    int firstOddRow = -1;
    int firstOddCol = -1;
    int prev;
    int temp;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 != 0) {
                temp = matrix[i][j];
                if (firstOddRow == -1) {
                    firstOddRow = i;
                    firstOddCol = j;
                } else {
                    matrix[i][j] = prev;
                }
                prev = temp;
            }
        }
    }
    matrix[firstOddRow][firstOddCol] = prev;
}

int main() {
    int matrix[][MATRIX_MAX] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows = sizeof(matrix)/sizeof(int) / MATRIX_MAX;
    int cols = 3;

    OddShift(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        cout << "[";
        for (int j = 0; j < cols; j++) {
            cout << " " << matrix[i][j];
        }
        cout << " ]" << endl;
    }

    return 0;
}