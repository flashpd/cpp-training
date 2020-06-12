#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double side, area;

    cin >> side;
    area = 3 * pow(3, 0.5) * side * side / 2;
    cout << area << endl;

    return 0;
}
