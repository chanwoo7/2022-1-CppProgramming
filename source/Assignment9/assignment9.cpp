#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    unsigned long num;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        unsigned long product = 1;
        cin >> num;
        
        while (num > 9) {
            product = 1;
            while (num != 0) {
                if (num % 10 == 0) num /= 10;
                else {
                    product *= num % 10;
                    num /= 10;
                }
            }
            num = product;
        }
        cout << num << endl;
    }
    return 0;
}