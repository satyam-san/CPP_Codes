#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int n = 4;
    int m = 4;
    int k = 33;
    int a[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};

    int r = 0;
    int c = m - 1;
    int x = r;
    int y = y;

    while (a[r][c] != k && r < n && c >= 0) {
        if (a[r][c] > k) {
            c--;
        }
        if (a[r][c] < k) {
            r++;
        }
        x = r;
        y = c;
    }
    if (a[x][y] == k) {
        cout << "Found : x : " << x << " y : " << y << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
    return 0;
}