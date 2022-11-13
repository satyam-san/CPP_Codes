#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int** create_array(int rows, int cols) {
    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    int value = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(arr + i) + j) = value;
            value++;
        }
    }

    return arr;
}


int main() {

    int rows = 3;
    int cols = 4;
    int ** arr = create_array(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << endl;
        }
    }
    delete arr;
    return 0;
}