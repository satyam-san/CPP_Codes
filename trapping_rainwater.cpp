#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int trap(vector <int> h) {
    int index;
    int l = -1;
    for (int i = 0; i < h.size(); i++) {
        if (l < h[i]) {
            index = i;
            l = h[i];
        }
    }

    int sum = 0;
    int cms = -1;
    int i = 0;
    while (i < index) {
        if (cms < h[i]) {
            cms = h[i];
        }
        else {
            sum = sum + (cms - h[i]);
        }
        i++;
    }
    cms = -1;
    i = h.size() - 1;
    while (i > index) {
        if (cms < h[i]) {
            cms = h[i];
        }
        else {
            sum = sum + (cms - h[i]);
        }
        i--;
    }

    return sum;
}


int main() {
    vector <int> h = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int ans = trap(h);
    cout << ans << endl;
    return 0;
}