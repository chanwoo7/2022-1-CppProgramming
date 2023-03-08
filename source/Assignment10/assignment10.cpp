#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int num, cont;
        int cnt = 0;
        bool inc = false;

        cin >> num >> cont;
        for (int i = 0; i < num - 1; i++) {
            int exp;
            cin >> exp;
            if (cont > exp) {
                if (inc) cnt++;
                inc = false;
            }
            else if (cont < exp)
                inc = true;
            cont = exp;
        }
        cout << cnt << endl;
    }
    return 0;
}