#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int x;
    cin >> x;

    (x & 1) == 1 ? cout << "ODD" << endl : cout << "EVEN" << endl;
    return 0;
}