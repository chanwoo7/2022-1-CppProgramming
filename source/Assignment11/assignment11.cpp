#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int size, j, k;
        cin >> size;

        for (j = 0; j < size / 2 + 1; j++) {
            for (k = 0; k < j; k++) {
                if (j == size / 2 && k == 0)
                    cout << "+";
                else if (k == 0)
                    cout << "|";
                else if (j == size / 2)
                    cout << "-";
                else cout << ".";
            }
            for (k = j; k < size - j; k++) {
                if (j == size / 2)
                    cout << "*";
                else if (j == 0 && (k == 0 || k == size / 2 || k == size - 1))
                    cout << "+";
                else if (j == k)
                    cout << "\\";
                else if (k == size / 2)
                    cout << "|";
                else if (k == size - j - 1)
                    cout << "/";
                else if (j == 0)
                    cout << "-";
                else cout << ".";
            }
            for (k = size - j; k < size; k++) {
                if (j == size / 2 && k == size - 1)
                    cout << "+";
                else if (k == size - 1)
                    cout << "|";
                else if (j == size / 2)
                    cout << "-";
                else cout << ".";
            }
            cout << endl;
        }
        for (j = size / 2 + 1; j < size; j++) {
            for (k = 0; k < size - j; k++) {
                if (j == size - 1)
                    cout << "+";
                else if (k == 0)
                    cout << "|";
                else if (k == size - j - 1)
                    cout << "/";
                else cout << ".";
            }
            for (k = size - j; k < j; k++) {
                if (j == size - 1 && k == size / 2)
                    cout << "+";
                else if (j == size - 1)
                    cout << "-";
                else if (k == size / 2)
                    cout << "|";
                else cout << ".";
            }
            for (k = j; k < size; k++) {
                if (j == size - 1)
                    cout << "+";
                else if (j == k)
                    cout << "\\";
                else if (k == size - 1)
                    cout << "|";
                else cout << ".";
            }
            cout << endl;
        }
    }
    return 0;
}