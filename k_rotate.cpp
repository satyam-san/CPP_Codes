#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int t = a[0];
        a[0] = a[n - 1];
        for (int j = 1; j < n; j++) {
            int p = a[j];
            a[j] = t;
            t = p;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}