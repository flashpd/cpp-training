#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    double a;
    cin >> x1 >> y1 >> x2 >> y2;
    a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    
    cout << pow(a, 0.5) << endl;

    return 0;
}
