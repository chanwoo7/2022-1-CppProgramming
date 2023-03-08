#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int size, j, k;
        cin >> size;
        
        /*for (j = size / 2 + 1; j >= 1; j--) {
            for (k = size / 2 + 1; k > j; k--) 
                cout << (k - 1) % 2;
            for (k = 1; k <= (j * 2 - 1); k++) 
                cout << (j - 1) % 2;
            for (k = j + 1; k <= size / 2 + 1; k++) 
                cout << (k - 1) % 2;
            cout << endl;
        }
        for (j = 1; j < size / 2 + 1; j++) {
            for (k = size / 2 + 1; k > j; k--)
                cout << (k - 1) % 2;
            for (k = 1; k <= (j * 2 - 1); k++)
                cout << j % 2;
            for (k = j + 1; k <= size / 2 + 1; k++)
                cout << (k - 1) % 2;
            cout << endl;
        }*/

        for (j = 0; j < size / 2 + 1; j++) {
            for (k = 0; k < j; k++) {
                
            }
        }

    }
    return 0;
}
