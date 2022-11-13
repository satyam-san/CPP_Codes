#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr = {-1, 2, 3, -4, 8};
    int lar = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > lar) {
            lar = arr[i];
        }
    }
    cout << lar << endl;
    return 0;
}