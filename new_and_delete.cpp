#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int *a = new int[100];
    for (int i = 0; i < 10; i++) {
        a[i] = i;                //can also be written as - *(a + i) = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << *(a + i) << endl;
    }
    delete []a;    //important for memory leak
    return 0;
}