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

    int d;
    int x = a[0];
    int y = a[1];
    int ans = k - (a[0] + a[1]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            d = k - (a[i] + a[j]);
            if (d < 0) {
                d = d * (-1);
            }
            if (ans > d) {
                ans = d;
                x  = a[i];
                y = a[j];
            }
        }
    }
    cout << x << ", " << y << endl;
    return 0;
}