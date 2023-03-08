#include <iostream>
using namespace std;

int angleClock(int h, int m);

int main(void) {
    int testCases;
    int h, m;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        cin >> h >> m;
        cout << angleClock(h, m) << endl;
    }

    return 0;
}

int angleClock(int h, int m) {
    double h_angle, m_angle, angle;

    h_angle = 30 * h + 0.5 * m;
    m_angle = 6 * m;

    if (h_angle >= m_angle) angle = h_angle - m_angle;
    else angle = m_angle - h_angle;

    if (angle > 180) angle = 360 - angle;

    return angle;
}