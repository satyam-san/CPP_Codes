#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    int n;
    cin >> n;

    vector <int> x_c;
    vector <int> y_c;

    x_c.push_back(0);
    y_c.push_back(0);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x_c.push_back(x);
        y_c.push_back(y);
    }

    x_c.push_back(w + 1);
    y_c.push_back(h + 1);

    sort(x_c.begin(), x_c.end());
    sort(y_c.begin(), y_c.end());

    int m_x = 0, m_y = 0;
    for (int i = 0; i < n + 1; i++) {
        m_x = max(m_x, x_c[i + 1] - x_c[i] - 1);
        m_y = max(m_y, y_c[i + 1] - y_c[i] - 1);
    }

    //cout << m_x << " " << m_y << endl;
    
    cout << m_x * m_y << endl;
    return 0;
}