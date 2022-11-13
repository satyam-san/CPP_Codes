#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p = n;
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[p - 1];
        a[p - 1] = t;
        p--;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}