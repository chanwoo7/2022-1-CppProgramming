#include <iostream>
using namespace std;

int main(void) {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 
            >> x3 >> y3 >> x4 >> y4;

        int area, peri;
        if (x2 < x3 || x1 > x4 || y2 < y3 || y1 > y4) {
            area = (x2 - x1) * (y2 - y1) + (x4 - x3) * (y4 - y3);
            peri = (x2 - x1 + y2 - y1) * 2 + (x4 - x3 + y4 - y3) * 2;
        }
        else {
            area = (x2 - x1) * (y2 - y1) + (x4 - x3) * (y4 - y3) - 
                ((x2 < x4 ? x2 : x4) - (x1 > x3 ? x1 : x3)) * 
                ((y2 < y4 ? y2 : y4) - (y1 > y3 ? y1 : y3));
            peri = ((x2 > x4 ? x2 : x4) - (x1 < x3 ? x1 : x3) + 
                (y2 > y4 ? y2 : y4) - (y1 < y3 ? y1 : y3)) * 2;
        }
        cout << area << " " << peri << endl;
    }
    return 0;
}