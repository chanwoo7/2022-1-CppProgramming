#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string n, share;
        cin >> n;

        while (n.size() > 1) {
            share = n[n.size() - 1] + share;
            int lastSub = (int)n[n.size() - 2] - (int)n[n.size() - 1];

            if (lastSub >= 0) {
                n = n.substr(0, n.size() - 1);
                n[n.size() - 1] = (char)(lastSub + 48);
            }
            else {
                if (n.size() >= 3) {
                    int p = n.size() - 3;
                    while (n[p] == '0')
                        n[p--] = (char)57;
                    n[p] = (char)((int)n[p] - 1);
                }

                n[n.size() - 2] = (char)((int)n[n.size() - 2] - (int)n[n.size() - 1] + 58);
                n = n.substr(0, n.size() - 1);
                if (n[0] == '0')
                    n = n.substr(1, n.size() - 1);
            }
        }
        if (n == "0") cout << share << endl;
        else cout << 0 << endl;
    }
    return 0;
}