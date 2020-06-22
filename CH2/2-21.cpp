#include <iostream>
using namespace std;

int main()
{
    double distance, milePerGallon, pricePerGallon, sum;
    cin >> distance >> milePerGallon >> pricePerGallon;
    sum  = distance / milePerGallon * pricePerGallon;

    cout << sum << endl;

    return 0;
}
