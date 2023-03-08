#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int numData, data;
        long long lastDigit = 1;

        cin >> numData;

        for (int j = 0; j < numData; j++) {
            cin >> data;
            lastDigit *= data;
            lastDigit %= 10;
        }
        cout << lastDigit << endl;
    }
    return 0;
}