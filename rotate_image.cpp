#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector <vector <int> > v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < v.size(); i++) {
        for (int j = v[i].size() - 1; j >= 0; j--) {
            cout << v[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}