#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int size, start, end;
        cin >> size >> start >> end;

        int** array = new int* [size];
        for (int i = 0; i < size; i++) {
            array[i] = new int[size];
        }
        
        int val = 1;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                array[i][j] = val;
                val++;
            }
        }

        int r = 0, c = -1, sw = 1, re = size, cnt = 0;
        while (true) {
            for (int i = 0; i < re; i++) {
                c += sw;
                cnt++;
                if (cnt >= start && cnt < end)
                    cout << array[r][c] << " ";
                else if (cnt == end) {
                    cout << array[r][c] << endl;
                    break;
                }
            }
            if (--re == 0) break;

            for (int i = 0; i < re; i++) {
                r += sw;
                cnt++;
                if (cnt >= start && cnt < end)
                    cout << array[r][c] << " ";
                else if (cnt == end) {
                    cout << array[r][c] << endl;
                    break;
                }
            }
            sw *= -1;
        }
    }
    return 0;
}
