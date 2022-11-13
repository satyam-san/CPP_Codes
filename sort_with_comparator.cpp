#include <iostream>
#include <algorithm>
using namespace std;

/*
bool compare(int a, int b) {
    return a < b;
}
*/


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool flag;
    cin >> flag;

    sort(a, a + n);
    if (flag == true) {
        reverse(a, a + n);
    }


    /*
    if (flag == 1) {
        sort(a, a + n, compare);
    }

    or

    if (flag == 1) {
        sort(a, a + n, greater<int>());
    }

    */

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}