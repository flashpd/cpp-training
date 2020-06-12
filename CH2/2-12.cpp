#include <iostream>

using namespace std;

int main()
{
    double v, a;
    double length;

    cin >> v >> a;
    length = v * v * 1.0 / (2 * a);
    cout << length << endl;

    return 0;
}
