#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //find largest subarray sum.

    int cs = 0;
    int ms = 0;

    for (int i = 0; i < n; i++) {
        cs = cs + a[i];
        if (cs < 0) {
            cs = 0;
        }
        else if (cs > ms){
            ms = cs;
        }
    }
    cout << ms << endl;
    return 0;
}