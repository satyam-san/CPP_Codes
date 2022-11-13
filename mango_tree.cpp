#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int m, n;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int aux[n][m];
    a[0][0] == '#' ? aux[0][0] = 1 : aux[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            else if (i == 0) {
                a[i][j] == '#' ? aux[i][j] = 1 + aux[i][j - 1] : aux[i][j] = aux[i][j - 1];
            }
            else if (j == 0) {
                a[i][j] == '#' ? aux[i][j] = 1 + aux[i - 1][j] : aux[i][j] = aux[i - 1][j];
            }
            else {
                a[i][j] == '#' ? aux[i][j] = 1 + aux[i - 1][j] + aux[i][j - 1] - aux[i - 1][j - 1] : aux[i][j] = aux[i - 1][j] + aux[i][j - 1] - aux[i - 1][j - 1];
            }
        }
    }
    cout << "Auxillary matrix :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << aux[i][j] << " ";
        }
        cout << endl;
    }
    int ans = 0;
    int q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int s1 = aux[i][j];
            int s2 = aux[i][m - 1] - s1;
            int s3 = aux[n - 1][j] - s1;
            int s4 = aux[n - 1][m - 1] - (s1 + s2 + s3);
            q = min(s1, s2);
            q = min(q, s3);
            q = min(q, s4);
            //cout << q << endl;
            ans = max(ans, q);
        }
    }
    cout << "Max : " << ans << endl;
    return 0;
}