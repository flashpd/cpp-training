#include <iostream>

using namespace std;

int main()
{
    double subtotal, rate;
    double gratuity, total;

    cin >> subtotal >> rate;
    gratuity = subtotal * (rate * 1.0 / 100);
    total = subtotal + gratuity;

    cout << gratuity << " " << total << endl;

    return 0;
}
