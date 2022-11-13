#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int x = 0, y = 0;

    for (int i = 0; i < s.length(); i++) {
        switch(s[i]) {
            case 'n' :
                y++;
                break;

            case 's' :
                y--;
                break;

            case 'w' :
                x--;
                break;

            case 'e' :
                x++;
                break;
        }
    }

    while (x != 0) {
        if (x < 0) {
            cout << 'W' << " ";
            x++;
        }
        else if (x > 0) {
            cout << 'E' << " ";
            x--;
        }
    }
    while (y != 0) {
        if (y < 0) {
            cout << 'S' << " ";
            y++;
        }
        else {
            cout << 'N' <<" ";
            y--;
        }
    }
    return 0;
}