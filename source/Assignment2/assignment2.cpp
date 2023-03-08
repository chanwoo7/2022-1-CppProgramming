#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int numData, data;
        int max, min;

        cin >> numData;
        cin >> data;
        max = min = data;

        for (int j = 1; j < numData; j++) {
            cin >> data;
            if (data < min) min = data;
            if (data > max) max = data;
        }
        cout << max << " " << min << endl;
    }
    return 0;
} 