#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string v;
        cin >> v;
        int result = 1;

        if (isdigit(v[0]))
            result = 0;
        for (int i = 0; i < v.size(); i++) {
            if (!(isalpha(v[i]) > 0 || isdigit(v[i]) || v[i] == '_'))
                result = 0;
        }
        cout << result << endl;
    }

    return 0;
}