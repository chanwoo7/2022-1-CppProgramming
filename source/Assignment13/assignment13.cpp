#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int min_a = 0, min_b = 0, max_a = 0, max_b = 0;

        if ((a < c && c < b) || (a < d && d < b) || 
            (c < a && a < d) || (c < b && b < d)) {
            (a < c) ? (min_a = c, max_a = a) : (min_a = a, max_a = c);
            (b < d) ? (min_b = b, max_b = d) : (min_b = d, max_b = b);
            cout << min_b - min_a << " " << max_b - max_a << endl;
        }
        else {
            cout << 0 << " " << (b - a) + (d - c) << endl;
        }
    }
    return 0;
}