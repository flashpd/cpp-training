#include <iostream>

using namespace std;

#define RATE 0.00417
int main()
{
    double base, sum = 0;
    cin >> base;
    sum = (sum + base) * (1 + RATE);
    sum = (sum + base) * (1 + RATE);
    sum = (sum + base) * (1 + RATE);
    sum = (sum + base) * (1 + RATE);
    sum = (sum + base) * (1 + RATE);
    sum = (sum + base) * (1 + RATE);
    cout << sum << endl;

    return 0;
}
