#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int size, j, k;
        cin >> size;

        for (j = 0; j < size / 2 + 1; j++) {
            for (k = 0; k < j; k++)
                cout << (size / 2 - k) % 2;
            for (k = j; k < size - j; k++)
                cout << (size / 2 - j) % 2;
            for (k = size - j; k < size; k++)
                cout << (size / 2 + k) % 2;
            cout << endl;
        }
        for (j = size / 2 + 1; j < size; j++) {

        }
    }
    return 0;
}