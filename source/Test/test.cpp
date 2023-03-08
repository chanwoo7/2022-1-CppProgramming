#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a, temp1 = 0, temp2 = 0, cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (j == 0) temp1 = a;
            else
            {
                if (a > temp1 && a > temp2) temp2 = a;
                else if (a < temp2)
                {
                    cnt += 1;
                    temp1 = a;
                    temp2 = 0;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}