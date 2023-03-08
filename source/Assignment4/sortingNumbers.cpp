#include <iostream>
using namespace std;

void sort3Integers(int a, int b, int c) {
    if (a <= b) {
        if (b <= c)
            cout << a << " " << b << " " << c << endl;
        else {
            if (a <= c)
                cout << a << " " << c << " " << b << endl;
            else
                cout << c << " " << a << " " << b << endl;
        }
    }
    else {
        if (a <= c)
            cout << b << " " << a << " " << c << endl;
        else {
            if (b <= c)
                cout << b << " " << c << " " << a << endl;
            else
                cout << c << " " << b << " " << a << endl;
        }
    }
}

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        sort3Integers(a, b, c);
    }
    return 0;
}