#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector <vector <int> > a;
    int n, m;
    cin >> n >> m;

    vector <int> rows(n, 1);
    vector <int> cols(m, 1);

    for (int i = 0; i < n; i++) {
        vector <int> t;
        for (int j = 0; j < m; j++) {
            int p;
            cin >> p;
            t.push_back(p);
        }
        a.push_back(t);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                rows[i] = 0;
                cols[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i] == 0 || cols[j] == 0) {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}