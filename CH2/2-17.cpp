#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double twc, ta, v;
    cin >> ta >> v;
    if (ta < -58 || ta > 41)
    {
        cout << "please input a temperature between -58 and 41" << endl;
        return 0;
    }
    if (v < 2)
    {
        cout << "please input a speed larger than 2" << endl;
        return 0;
    }

    twc = 35.74 + 0.6215 * ta - 35.75 * pow(v, 0.16) + 0.4275 * ta * pow(v, 0.16);

    cout << twc << endl;

    return 0;
}
