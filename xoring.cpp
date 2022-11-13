#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// an array of integers is given. find out the element which is present only once or which is present odd number of times given that all others elements are present 2 times or even number of times

int unique(vector <int> v) {
    int ans = v[0];
    for (int i = 1; i < v.size(); i++) {
        ans = ans ^ v[i];
    }
    return ans;
}


int main() {
    vector <int> v = {11, 23, 23, 11, 15, 16, 15};
    cout << unique(v) << endl;
    return 0;
}