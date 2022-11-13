#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    int aux[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                aux[i][j] = a[i][j] + aux[i][j - 1];
            }
            else if (j == 0) {
                aux[i][j] = aux[i - 1][j] + a[i][j];
            }
            else {
                aux[i][j] = a[i][j] + aux[i - 1][j] + aux[i][j - 1];
            }
        }
    }
    int q;
    cout << "Enter number of querry : " << endl;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int s;
        if (x1 == 0 && y1 == 0) {
            s = aux[x2][y2];
        }
        else if (x1 == 0) {
            s = aux[x2][y2] - aux[x2][y1 - 1];
        }
        else if (y1 == 0) {
            s = aux[x2][y2] - aux[x1 - 1][y2];
        }
        else {
            s = aux[x2][y2] + aux[x1 - 1][y1 - 1] - aux[x2][y1 - 1] - aux[x1 - 1][y2];
        }
        cout << s << endl;
    }
    return 0;
}