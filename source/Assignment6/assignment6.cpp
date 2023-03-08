#include <iostream>
using namespace std;

int isPower(int num);

int main(void) {
    int testCases;
    int num;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        cin >> num;
        cout << isPower(num) << endl;
    }

    return 0;
}

int isPower(int num) {
    int temp = num;
    int sum = 0;
    int cnt = 0;

    while (temp != 0) {
        temp /= 10;
        cnt++;
    }

    temp = num;
    while (temp != 0) {
        int product = 1;
        for (int j = 0; j < cnt; j++) {
            product *= temp % 10;
        }
        sum += product;
        temp /= 10;
    }

    if (sum == num) return 1;
    else return 0;
}