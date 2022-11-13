#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int main() {
    int n = 75619;
    //cin >> n;
    int m = 2;
    
    while (m < 100000) {
        int flag = 0;
        for (int i = 2; i < m; i++) {
            if (m % i == 0) {
                flag = 1;
                break;
            }
        }
        int check = 0;
        if (flag == 0) {
            int ans = n + m;
            for (int i = 2; i < ans; i++) {
                if (ans % i == 0) {
                    check = 1;
                    break;
                }
            }
        }

        if (check == 1) {
            cout << m << endl;
            break;
        }
        m++;
    }
    return 0;
}