#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int n = 4;
    int m = 4;
    int a[][10] = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15, 16}};

    int sr = 0;
    int sc = 0;
    int er = n - 1;
    int ec = m - 1;

    while (sc <= ec) {
        for (int j = sr; j <= er; j++) {
            cout << a[j][ec] << " ";
        }
        ec--;
        for (int j = er; j >= sr; j--) {
            cout << a[j][ec] << " ";
        }
        ec--;
    }
    cout << endl;
    return 0;
}