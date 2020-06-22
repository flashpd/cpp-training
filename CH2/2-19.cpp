#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, x2, x3, y1, y2, y3, s, area;
    double side1, side2, side3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    side1 = pow((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2), 0.5); 
    side2 = pow((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3), 0.5);
    side3 = pow((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1), 0.5);

    s = (side1 + side2 + side3) / 2;

    area = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);

    cout << area << endl;
    return 0;
}
