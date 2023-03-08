#include <iostream>
using namespace std;

int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int y, m, d;
        cin >> y >> m >> d;
        int total = 0;

        for (int i = 1582; i < y; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                month[1] = 29;
            else month[1] = 28;
            for (int j = 0; j < 12; j++)
                total += month[j];
        }

        for (int i = 0; i < m - 1; i++) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                month[1] = 29;
            else month[1] = 28;
            total += month[i];
        }
        
        total += d - 1;
        cout << (total + 5) % 7 << endl;
    }
    return 0;
}