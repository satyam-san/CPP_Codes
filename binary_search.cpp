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
    int k;
    cin >> k;
    sort(a, a + n);
    int l = 0;
    int mid = 0;
    n--;
    while (l <= n) {
        mid = (l + n) / 2;
        if (a[mid] == k) {
            cout << "Found" << endl;
            return 0;
        }
        else if (a[mid] < k) {
            l = mid + 1;
        }
        else {
            n = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}