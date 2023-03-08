#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int size;
        cin >> size;
        int **arr = new int*[size];
        for (int i = 0; i < size; i++) {
            arr[i] = new int[size];
        }

        int j = 0, k = size / 2, num = 1;
        int j_block = j;
        int k_block = k;
        while (num <= size * size) {
            if (j < 0) j += size;
            if (k >= size) k -= size;
            if (j_block >= size) j_block -= size;
            if (k_block < 0) k_block += size;

            if ((j - 1 == j_block || j + size - 1 == j_block) &&
                (k + 1 == k_block || k - size + 1 == k_block)) {
                arr[j++][k] = num++;
                j_block += 2;
                k_block--;
            }
            else arr[j--][k++] = num++;
        }

        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                cout << arr[j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}