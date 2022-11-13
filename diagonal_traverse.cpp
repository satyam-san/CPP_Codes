#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {

    int n = 3;
    int m = 3;
    int a[n][m] = { {1, 3, 5},
    {2, 4, 6},
    {7, 8, 9}};

    int start_row = 0;
    int start_column = 0;
    int end_row = n;
    int end_column = m;
    int c_row = 0;

    while (start_row >= 0) {
        if (c_row == n) {
            break;
        }
        cout << a[start_row][start_column] << " ";
        if (start_row == 0) {
            if (start_row < end_row) {
                c_row++;
            }
            start_row = c_row;
            start_column = 0;
            cout << endl;
            continue;
        }
        start_column++;
        start_row--;
    }

    c_row = 1;

    start_row = end_row - 1;
    start_column = 1;
    int c_column = 1;

    while (start_row > 1) {
        if (c_row == end_row) {
            break;
        }
        cout << a[start_row][start_column] << " ";
        if (start_row == c_row + 1) {
            c_row++;
            c_column++;
            start_row = end_row - 1;
            start_column = c_column;
            continue;
        }
        start_row--;
        start_column++;
    }
    return 0;
}