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
    for (int i = 0; i < n; i++) {
        if (k == a[i]) {
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}