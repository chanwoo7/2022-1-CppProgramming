#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int r, s, t;
        cin >> r >> s >> t;
        
        int** arr1 = new int* [r];
        for (int i = 0; i < r; i++) {
            arr1[i] = new int[s];
            for (int j = 0; j < s; j++) {
                cin >> arr1[i][j];
            }
        }

        int** arr2 = new int* [s];
        for (int i = 0; i < s; i++) {
            arr2[i] = new int[t];
            for (int j = 0; j < t; j++) {
                cin >> arr2[i][j];
            }
        }

        int sum;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++) {
                sum = 0;
                for (int k = 0; k < s; k++) {
                    sum += arr1[i][k] * arr2[k][j];
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
    return 0;
}