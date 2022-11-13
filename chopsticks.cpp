#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int d;
    cin >> d;

    sort(a, a + n);

    int c = 0;

    for (int i = 0; i < n; i++) {
        if (a[i + 1] - a[i] <= d) {
            c++;
            i++;
        }
    }
    cout << c << endl;
    return 0;
}